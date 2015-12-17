/*
 * Vakit.h
 *
 *  Created on: 17 Ara 2015
 *      Author: rivendell
 */

#ifndef VAKIT_H_
#define VAKIT_H_

class Vakit {
public:
	int saat, dakika;
	Vakit();
	Vakit(int dakika, int saat){
		this->saat = saat;
		this->dakika = dakika;
	}
	virtual ~Vakit();
	Vakit operator++();  		//prefix
	Vakit operator++(int i);    //postfix
};

#endif /* VAKIT_H_ */
