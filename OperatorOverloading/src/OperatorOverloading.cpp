//============================================================================
// Name        : OperatorOverloading.cpp
// Author      : M.A.
// Version     :
// Copyright   : Your copyright notice
// Description : Operator Overloading C++, Ansi-style
//============================================================================

#include <iostream>
#include "Tarih.h"
#include "Vakit.h"
#include "Personel.h"
#include "Deneme.h"

using namespace std;

int main() {

	 Personel p1("musa", "ayd�n", 30);
	 Personel p2("samet","kaya",15);
	 cout<< p1<<endl;
     cout<<"objeler birbirinden ��kar�l�yor sonuc..:"<<p1-p2<<endl;

     cout<<"Personel maasi...:"<<++p1<<endl;
	Tarih t(8, 10, 2010);
		t = t + 21;
		//t = t + 360;
		cout<<t.gun<<"/"<<t.ay<<"/"<<t.yil<<endl;
/*
		Tarih to(30, 5, 2015);
		to.topla(1);
		cout<<to.gun<<"/"<<to.ay<<"/"<<to.yil<<endl;


		Tarih t1(30,12,2011);
		Tarih t2(1,1,2012);
		cout<<t1-t2<<endl;


		Personel p("Ali", "Demir", 1200);
		cout<<p<<endl;


		Personel p1("Veli", "Tekka�", 2000);
		Personel p2("Hasan", "�iftka�", 2500);
		cout<<(p1>p2)<<endl;


		Vakit v1(40,12);
		Vakit v2 = v1++;
		cout<<"v1 dakika: "<<v1.dakika<<endl;
		cout<<"v2 dakika: "<<v2.dakika;

*/

	return 0;
}
