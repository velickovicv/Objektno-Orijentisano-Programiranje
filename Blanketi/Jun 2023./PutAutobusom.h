#pragma once
#include "Put.h"


class PutAutobusom : public Put
{
private: 

	int ukupnoKm;
	double cenaGorivaPoLitru;
	double potrosnjaGoriva;
	int brojNociUAutobusu;

public:

	PutAutobusom();
	PutAutobusom(char* _imeGrada, int _maxBrPutnika, int _brojNocenja, double _cenaPoNocenju, int _ukupnoKm, double _cenaGorivaPoLitru, double _potrosnjaGoriva, int _brojNociUAutobusu);
	virtual ~PutAutobusom();

	virtual double cenaZaAgenciju();
	virtual double cenaZaPutnika();

	virtual void prikazi(ostream& izlaz);

};
