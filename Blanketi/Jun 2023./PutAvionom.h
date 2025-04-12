#pragma once
#include "Put.h"
#include <fstream>
#include <iostream>
using namespace std;

class PutAvionom : public Put
{
private:

	char* imeKompanije;
	double duzinaLeta;
	double cenaMestaPoPutniku;

public:

	PutAvionom();
	PutAvionom();
	virtual ~PutAvionom();

	double getCenaZaAgenciju() { return getMaxPutnika() * (cenaMestaPoPutniku + getCenaPoSmestaju()); }
	double getCenaPutaPoPutniku() { return cenaMestaPoPutniku * 1.30 + getCenaPoSmestaju() * 1.25; }

	virtual void prikazi(ostream& izlaz);
};
