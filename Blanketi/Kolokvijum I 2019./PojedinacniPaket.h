#include "Paket.h"
#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class PojedinacniPaket : public Paket
{
public:

	PojedinacniPaket() : Paket() { }
	PojedinacniPaket(double brPrMin, double kolPod);
	virtual ~PojedinacniPaket();

	virtual zaUplatu();
	virtual double vratiBrojPretplateMinuta();
	virtual void zameniProcentualniParametar(double novi) { }
	virtual void zameniBrojDece(double novi) { }
	virtual void prikazi(ostream& izlaz);
};
