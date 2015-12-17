/*
 * ClassArrayConstructor.h
 *
 *  Created on: 15 Ara 2015
 *      Author: rivendell
 */

#ifndef CLASSARRAYCONSTRUCTOR_H_
#define CLASSARRAYCONSTRUCTOR_H_
using namespace std;
class ClassArrayConstructor {
float real,img;
public:
	ClassArrayConstructor(float,float);
	~ClassArrayConstructor();
	float getreal();
	float getImg();
};
ClassArrayConstructor::ClassArrayConstructor(float d1, float d2 = 2){
   real = d1;
   img  = d2;
   cout<<"Constructor çalýþtý..."<<endl;
}
float ClassArrayConstructor::getreal(){
      return this->real;

}
float ClassArrayConstructor::getImg(){
    return this->img;
}
ClassArrayConstructor::~ClassArrayConstructor(){
   cout<<"Destructor calýþtý...:"<<endl;
}

#endif /* CLASSARRAYCONSTRUCTOR_H_ */
