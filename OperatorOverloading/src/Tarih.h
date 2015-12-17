/*
 * Tarih.h
 *
 *  Created on: 17 Ara 2015
 *      Author: rivendell
 */

#ifndef TARIH_H_
#define TARIH_H_

using namespace std;

class Tarih {
public:
	int gun, ay, yil;
	Tarih();
	Tarih(int gun=1, int ay=1, int yil=0){
		this->gun = gun;
		this->ay = ay;
		this->yil = yil;
	}
	virtual ~Tarih();
	Tarih operator+(const int& i);
	Tarih topla(const int& i);
	int operator-(const Tarih& t);
};

#endif /* TARIH_H_ */
