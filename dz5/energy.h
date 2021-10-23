#pragma once

#include <cmath>

static const double JvErg = pow(10, 7);
static const double JvEv = (1 / (1.6 * pow(10, -19)));

class Energy {
public:

	double Ev;
	double Erg;

	void fJvErg(double mJoul);
	void fPrint();
};
