//============================================================================
// Name        : Cpp_first.cpp
// Author      : M.A.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Time {// S�n�f tan�m�
	int hour; //Nitelikler
	int minute;
	int second ;
	public:
	void SetTime(int h,int m,int s){
		this->hour = h;
		minute=m;
		second=s;
	} ; //1. metod
	void PrintTime(){
		cout<<"deneme"<<endl;
	}
};

class Point {
	public:
	float GetX() { return x; }; // get x coordinate
	void SetX(int pX) { this->x =pX; }; // set x coordinate
	private:
	float x;
};
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
