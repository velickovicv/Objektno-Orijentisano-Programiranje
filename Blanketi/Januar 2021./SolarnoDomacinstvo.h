#pragma once
#include "Domacinstvo.h"

class SolarnoDomacinstvo : public Domacinstvo
{

private:

	double dobijenaEnergija;
	double koefpod;
	double cenaodrz;

public:

	SolarnoDomacinstvo();
	SolarnoDomacinstvo(int _brojId, double _povrsina, double _potrosnja, double _dobe, double _koefpod, double _cenaodrz);
	~SolarnoDomacinstvo();

	virtual double cenaPotrosnje(double cena);
	virtual void ispisi(ostream& izlaz);
};
