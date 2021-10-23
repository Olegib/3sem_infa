#include "energy.h"
#include <iostream>


void Energy::fJvErg(double mJoul) {
	Erg = mJoul * JvErg;
	Ev = mJoul * JvEv;
}

void Energy::fPrint() {
	std::cout << "J to Ergs" << Erg << "\n";
	std::cout << "J to Ev: " << Ev << "\n";
}

