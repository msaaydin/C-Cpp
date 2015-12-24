/*
 * Araba.h
 *
 *  Created on: 24 Ara 2015
 *      Author: rivendell
 */

#ifndef ARABA_H_
#define ARABA_H_

class Araba {
private:
	int hiz;
public:
	Araba();
	virtual ~Araba();
	void setHiz(int);
	int getHiz();
	void hizlan(int x = 5);
	double sureHesapla(int);
};

#endif /* ARABA_H_ */
