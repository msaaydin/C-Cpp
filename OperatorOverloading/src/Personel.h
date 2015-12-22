/*
 * Personel.h
 *
 *  Created on: 17 Ara 2015
 *      Author: rivendell
 */

#ifndef PERSONEL_H_
#define PERSONEL_H_
#include <string>
#include <iostream>

using namespace std;
class Personel {
public:
	string ad, soyad;
    double maas;
	Personel();
	~Personel();
	Personel(string ad, string soyad, double maas){
			this->ad = ad;
			this->soyad = soyad;
			this->maas = maas;
	}
	friend ostream& operator<<(ostream& output, Personel& p );
	bool operator>(const Personel& p);
	int operator-(const Personel& p);
	Personel& operator++();
};

Personel::Personel(){

}
Personel::~Personel(){

}
ostream& operator<<(ostream& output, Personel& p ){
	output<<p.ad<<" "<<p.soyad <<" hopaaa";
	return output;
}
bool Personel::operator>(const Personel& p){
	if(this->maas > p.maas)
		return true;
	else
		return false;
}
int Personel::operator -(const Personel& p){
	return this->maas - p.maas;
}
Personel& Personel::operator++(){
	++maas;
	return *this;
}
#endif /* PERSONEL_H_ */
