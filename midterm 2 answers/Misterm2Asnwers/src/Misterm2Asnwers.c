/*
 ============================================================================
 Name        : Misterm2Asnwers.c
 Author      : M.A.
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm2 Questions, Ansi-style
 ============================================================================
 */
struct Personel{
   char *ad_soyad;
   int yas;
   char cinsiyet;
};
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	struct Personel p[5];

	p[0].yas = 12;
	printf("%d\n",p[0].yas);
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
