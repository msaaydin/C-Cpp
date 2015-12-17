/*
 * Personel.h
 *
 *  Created on: 15 Ara 2015
 *      Author: rivendell
 */

#ifndef PERSONEL_H_
#define PERSONEL_H_

#include <string>
using namespace std;

class Personel {
public:
	Personel(string);
	Personel(){

	}
    void setName(string);
    string getName();
private:
    string p_name;
};
string Personel::getName(){
   return this->p_name;
}
void Personel::setName(string s){
    this->p_name = s;
}
Personel::Personel(string s){
   cout<<s<<"  personel objesi oluşturuldu....:"<<endl<<endl;
}
#endif /* PERSONEL_H_ */
