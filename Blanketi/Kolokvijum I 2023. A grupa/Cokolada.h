#pragma once
#include "Poklon.h"

class Cokolada : public Poklon
{

private:

	double procenatKakaa;

public:

	Cokolada();
	Cokolada(double _cena, int _brojMasnica, double _procenatKakaa);
	Cokolada(const Cokolada& c);
	~Cokolada();
    
	void print(ostream& izlaz) const;
	int vratiBrojMasnica() const;
};
