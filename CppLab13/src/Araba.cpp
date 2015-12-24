/*
 * Araba.cpp
 *
 *  Created on: 24 Ara 2015
 *      Author: rivendell
 */

#include "Araba.h"

Araba::Araba() {
	// TODO Auto-generated constructor stub

}

Araba::~Araba() {
	// TODO Auto-generated destructor stub
}

void Araba::setHiz(int hiz){
	this->hiz = hiz;
}
int Araba::getHiz(){
	return hiz;
}
void Araba::hizlan(int miktar){
	hiz += miktar;
}

double Araba::sureHesapla(int yol){
	return (double)yol/hiz;
}
