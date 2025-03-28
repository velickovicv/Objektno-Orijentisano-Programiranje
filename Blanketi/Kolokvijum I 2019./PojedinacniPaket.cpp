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

	virtual double zaUplatu();
	virtual double vratiBrojPretplateMinuta();
	virtual void zameniProcentualniParametar(double novi) { }
	virtual void zameniBrojDece(double novi) { }
	virtual void prikazi(ostream& izlaz);
};

#include "PojedinacniPaket.h"

PojedinacniPaket::PojedinacniPaket(double brPrMin, double kolPod)
	:Paket((char*)"Pojedinacni_paket", brPrMin, kolPod) {

}
PojedinacniPaket::~PojedinacniPaket()
{

}
void PojedinacniPaket::prikazi(ostream& izlaz)
{
	Paket::Prikazi(izlaz);
	izlaz << setw(30) << left << "Za uplatu: " << zaUplatu() << " din" < endl;

}
double PojedinacniPaket::zaUplatu() {
	return (vratiBrojPretplateMinuta * cenaMinuta) + (kolicinaPodataka * cenaPoJedinici);
}
double PojedinacniPaket::vratiBrojPretplateMinuta()
{
	return brPreMin;
}
