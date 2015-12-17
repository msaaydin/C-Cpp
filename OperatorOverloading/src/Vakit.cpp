/*
 * Vakit.cpp
 *
 *  Created on: 17 Ara 2015
 *      Author: rivendell
 */

#include "Vakit.h"

Vakit::Vakit() {
	// TODO Auto-generated constructor stub

}

Vakit::~Vakit() {
	// TODO Auto-generated destructor stub
}

Vakit Vakit::operator++(){
	dakika++;
	if(dakika == 60){
		dakika = 0;
		saat++;
		if( saat == 24)
			saat = 0;
	}
	return Vakit(dakika, saat);
}


Vakit Vakit::operator++(int i){

	Vakit v(dakika, saat);

	dakika++;
	if(dakika == 60){
		dakika = 0;
		saat++;
		if( saat == 24)
			saat = 0;
	}
	return v;
}

