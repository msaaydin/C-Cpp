/*
 ============================================================================
 Name        : 1.c
 Author      : Musa AYDIN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define size 10
#define sizeNot 5

void passArrayRef(int*, int);
void passArrayName(int[], int);
// fonksiyondan array döndürme dizideki toplamý ve en büyük sayýyý
int* returnArrayFromFunction(int*, int);

struct Ogrenci {
	int no;
	char* ad_soyad;
	int dersNot[sizeNot];
};

// ogrenci struct array i alan ve numarasý 1234 olan ögrencinin notlarýný geri döndüren metodu yazalýl

int* ogrenciNot(struct Ogrenci*, int);
int main(void) {

	srand(time(NULL));

	int dizi1[size];
	int i;
	int length = sizeof(dizi1) / sizeof(dizi1[0]);
	printf("dizinin orjinal hali\n");

	for (i = 0; i < length; i++) {
		dizi1[i] = rand() % 1000;
		printf("%d ,  ", dizi1[i]);
	}

	printf("\n");
	passArrayRef(dizi1, length);
	printf("call passArrayRef \n");
	for (i = 0; i < length; i++) {
		printf("%d ,  ", dizi1[i]);
	}
	printf("\n");
	passArrayName(dizi1, length);
	printf("call passArrayName \n");
	for (i = 0; i < length; i++) {
		printf("%d ,  ", dizi1[i]);
	}

	int* returnArray;
	returnArray = returnArrayFromFunction(dizi1, length);

	printf("\n max=  %d \n", *returnArray);
	printf(" toplam=  %d \n", *(returnArray + 1));
	// struct iþlem
	struct Ogrenci ogr1[size];

	int lentstruct = sizeof(ogr1) / sizeof(ogr1[0]);
	int j;

	for (i = 0; i < lentstruct; i++) {

		ogr1[i].ad_soyad = "fsm..";
		ogr1[i].no = rand() % 10000;
		for (j = 0; j < sizeNot; j++) {
			ogr1[i].dersNot[j] = rand() % 100;
		}
	}
	////////////
	for (i = 0; i < lentstruct; i++) {
			printf("ogrenci adý = %s  ", ogr1[i].ad_soyad);

			for (j = 0; j < sizeNot; j++) {
				printf("  not = %d", ogr1[i].dersNot[j]);

			}
			printf("\n");
		}
	fflush( stdout );
	printf("Numarasi 1234 olan ogrenciyi bulan ve notlarýný return eden fonk...\n");
	// numaralarý random attýðýmýz için kendimiz herhangi bir ogrenciye 1234 numarasý verdik
	ogr1[3].no = 1234;

	int* not = ogrenciNot(ogr1, lentstruct);
	for (j = 0; j < sizeNot; j++) {
		printf("not = %d\n", *(not + j));

	}
	return 0;
}

void passArrayRef(int* index, int length) {

	int i;
	for (i = 0; i < length; i++) {
		*(index + i) += 10;
	}

}
void passArrayName(int d[], int length) {

// int d[] == int* d ayný anlama gelmektedir.
	int i;
	for (i = 0; i < length; i++) {
		d[i] += 10;
	}

}
// fonksiyondan array döndürme dizideki toplamý ve en büyük sayýyý
int* returnArrayFromFunction(int* index, int length) {
	int i;

	int toplam = 0;
	int max = *(index);
	for (i = 0; i < length; i++) {
		if (*(index + i) > max) {
			max = *(index + i);
		}

		toplam += *(index + i);
	}
	int rt[2];
	rt[0] = max;
	rt[1] = toplam;
	return rt;

}

int* ogrenciNot(struct Ogrenci* ogr, int length) {
	int i,j;
	int not[sizeNot];

	for (i = 0; i < length; i++) {
		if ((ogr + i)->no == 1234) {
			for (j = 0; j < sizeNot; j++){
                not[j] = (ogr+i)->dersNot[j];
 			}

		}
    }

	return not;

}
