//============================================================================
// Name        : StringPermutation.cpp
// Author      : M.A.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;




unsigned long count = 0;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r)
{

   int i;
   if (l == r){
	   count++;
	   printf("%s  - %lu\n", a,count);
   }

   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i));

       }
   }
}

int main() {
	 char str[] = "ABCDEFGHK";
	    int n = strlen(str);
	    clock_t begin = clock();

	    permute(str, 0, n-1);
	    cout<<"i�lem bitti..:"<<endl;
	    clock_t end = clock();
	    double elapsed_secs = double(end - begin);// / CLOCKS_PER_SEC;
	    cout<<"toplam s�re..="<<elapsed_secs<<"  ms "<<endl;
	return 0;
}
