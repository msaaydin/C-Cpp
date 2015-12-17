//============================================================================
// Name        : Cpp_class.cpp
// Author      : M.A.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Personel.h"
#include <string>
#include "ClassArrayConstructor.h"
#include "TemplateStack.h"

using namespace std;
void swap(int &s1,int &s2){

	int t = s1;
	s1 = s2;
	s2 = t;
}
int main() {
	cout << "Cpp class example" << endl; // prints Cpp class example
	string a = "musa ayd�n";
	cout<<a<<endl;
	Personel p("merhaba");
	Personel p1;
	p.setName("deneme");
    cout<<p.getName()<<endl;
    int ss1 = 34, ss2 = 45;
    cout<<"ss1 in de�eri...:"<<ss1<<"  ss2 nin de�eri....:"<<ss2<<endl;
    swap(ss1,ss2);
    cout<<"ss1 in de�eri...:"<<ss1<<"  ss2 nin de�eri....:"<<ss2<<endl;
    ClassArrayConstructor cc[] = {{1.1},{2.2},ClassArrayConstructor(2.3,554.65)};
    cout<<"cc[0].getImg() = "<<cc[0].getImg()<<endl;
    cout<<"cc[1].getImg =   "<<cc[1].getImg()<<endl;
    cout<<"cc[2].getImg =   "<<cc[2].getImg()<<endl;
    cout<<"yok edici method �ali�madan �ncei�lemler..."<<endl;
    TemplateStack<string> mystack;
    mystack.setSize(10);
    mystack.push("musa");
    mystack.push("ali");
          cout<<mystack.pop()<<endl;
          cout<<mystack.pop()<<endl;




	return 0;
}
