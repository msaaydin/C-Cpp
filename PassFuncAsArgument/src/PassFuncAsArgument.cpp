//============================================================================
// Name        : PassFuncAsArgument.cpp
// Author      : M.A.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
void askUsername(string&);
int askUserScore();
void myPrint(string,int);
int main() {
	cout << "Func. Argument" << endl; // prints Func. Argument
	string name;
	askUsername(name);
	myPrint(name,askUserScore());

	return 0;
}

void askUsername(string& newName){
   cout<<"Enter your name";
   cin>>newName;
   cout<<endl;

}
int askUserScore(){
   int score;
   cout<<"Enter credit score..."<<endl;
   cin>>score;
   return score;

}
void myPrint(string name, int score){
	cout<<name << "your score is .:"<<score<<endl;

}
