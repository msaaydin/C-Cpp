/*
 ============================================================================
 Name        : Midterm2Ans_.c
 Author      : M.A.
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm 2 all questions answers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//soru2:
 struct Student{
   char *ad_soyad;
   int numara;
   int notlar[5];
};
int biggestStudentId(struct Student s[]){

	 int average[] = {0,0,0,0,0};
     int i,j;
     printf("fonksiyon calisti\n");
     printf("/-----------------------------/\n");
     for (j = 0; j < 5; j++){
       for (i = 0; i < 5; i++){
            average[j]+=s[j].notlar[i];
        }
       average[j] /=5;
       printf("%d indexli ogrencinin ortalamasi...:%d\n",j,average[j]);
     }
     int max = average[0];
     int indx = 0;
     for(i = 1; i < 5; i++){
        if (average[i] > max){
            max = average[i];
            indx  = i;
        }
     }
   return s[indx].numara;
}
//soru 2:
int main(void) {
	srand ( time(NULL) );
	struct Student ss[5];
    ss[0].ad_soyad = "musa ayd�n";
    ss[1].ad_soyad = "ali";
    ss[2].ad_soyad = " ayd�n";
    ss[3].ad_soyad = "hasan";
    ss[4].ad_soyad = "veli";
    ss[0].numara = 2343;
    ss[1].numara = 787;
    ss[2].numara = 27873;
    ss[3].numara = 999099;
    ss[4].numara = 456644;
    puts("Midterm 2 solution");
    int i,j;
    for (j = 0; j < 5; j++){
       for (i = 0; i < 5; i++){
          ss[j].notlar[i] = rand() % 100 + 1;
       }
    }
    for (j = 0; j < 5; j++){
           for (i = 0; i < 5; i++){

        	   printf("%d - ",ss[j].notlar[i]);
           }
           printf("\n");
    }
    for (i = 0; i <5; i++){
    	if (ss[i].numara == biggestStudentId(ss)){
    		printf("Ortalamas� en y�ksek olan ogrecinin ad�:%s\n",ss[i].ad_soyad);
    		printf("Ortalamasi en y�ksek olan ogrencinin numaras�...:%d\n",biggestStudentId(ss));
    		break;
    	}
    }

  return 0;
}
////soru 7:
//output:
//Fatih
//sul
//tan
//mehmet
//vakif
//uni

/*int main(void){

	char str[80] = {"Fatih sul tan mehmet vakif uni"};
	    char token[10];
	    char *p , *q;
	    p = str;
	    while (*p) {
	        q = token;
	        while (*p != ' ' && *p) {
	            *q = *p;
	             q++ ; p++;
	        }
	        if (*p) p++;
	        *q = '\0';
	        printf("%s\n" , token);
	    }
	    return 0;
}*/
//soru 6:
//output:
//134 - 52 - 653 - 344 - 454 - 675 - 99 - 232 -
//**************************************
//23 - 232 - 99 - 675 - 454 - 344 - 653 - 52 -

/*int main(void){

    int array1[] = {134,52,653,344,454,675,99,232};
    int k;
    for(k = 0; k < 8; k++)
	printf("%d - ",array1[k]);
	printf("\n");
	printf ("**************************************\n");
    int array2[] = {23,34,65,76,87,23,8,2};
	int *ip1,*ip2,*ep;
	ip2 = &array2[8];
	ep = &array1[8];
	  for(ip1 = &array1[0]; ip1 < ep; ip1++){
                           *ip2 = *ip1;
                              ip2--;
	  }
	  for(k = 0; k < 8; k++)
	  	 printf("%d - ",array2[k]);

	return 0;

} */

//soru 5:
/*
 * output:
 * 45 (000000000023FE00)
   67 (000000000023FE04)
   89 (000000000023FE08)
 * */
/*int main(void){
	int array[] = { 45, 67, 89 };
	    int * array_ptr;
	    array_ptr = array;
	    printf("%i (%p)\n", *array_ptr, array_ptr);
	    array_ptr++;
	    printf("%i (%p)\n", *array_ptr, array_ptr);
	    array_ptr = array_ptr + 1;
	    printf("%i (%p)\n", *array_ptr, array_ptr);
	    return 0;


}*/


