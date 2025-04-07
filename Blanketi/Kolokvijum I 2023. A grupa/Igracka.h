#pragma once
#include "Poklon.h"

class Igracka : public Poklon
{

private:

	char* tipMaterijala;

public:

	Igracka();
	Igracka(double _cena, int _brojMasnica, const char* _tipMaterijala);
	Igracka(const Igracka& i);
	virtual ~Igracka();

	int vratiBrojMasnica() const;
	void prikazi(ostream& izlaz) const;

};
