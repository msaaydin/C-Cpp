/*
 * Tarih.cpp
 *
 *  Created on: 17 Ara 2015
 *      Author: rivendell
 */

#include "Tarih.h"

Tarih::Tarih() {
	// TODO Auto-generated constructor stub

}

Tarih::~Tarih() {
	// TODO Auto-generated destructor stub
}

Tarih Tarih::operator+(const int& i){
	gun += i;
	if( gun > 30){
		int ayekle = gun/30;
		gun %= 30;
		ay += ayekle;
		if( ay > 12){
			int yilekle = ay/12;
			ay %= 12;
			yil += yilekle;
		}
	}
	return Tarih(gun, ay, yil);
}

Tarih Tarih::topla(const int& i){

	gun += i;
	if( gun > 30){
		int ayekle = gun/30;
		gun %= 30;
		ay += ayekle;
		if( ay > 12){
			int yilekle = ay/12;
			ay %= 12;
			yil += yilekle;
		}
	}
	return Tarih(gun, ay, yil);
}






int Tarih::operator-(const Tarih& t){

	int yil_farki = this->yil - t.yil;
	int ay_farki = this->ay - t.ay;
	int gun_farki = this->gun - t.gun;

	int fark = yil_farki*360 + ay_farki*30 + gun_farki;

	return fark;
}
