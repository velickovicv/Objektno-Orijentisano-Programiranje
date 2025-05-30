#pragma once
#include "IspitniMaterijali.h"

class Zadaci : public IspitniMaterijali
{
	
private:

	int linijekoda;

public:

	Zadaci();
	Zadaci(int _oznaka, double _tezina, bool _status, int _linijekoda);
	Zadaci(const Zadaci& z);
	~Zadaci();

	float vratiVreme(int vreme);

	void ispisi(ostream& izlaz);

};
