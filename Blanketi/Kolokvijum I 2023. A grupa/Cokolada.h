#pragma once
#include "Poklon.h"

class Cokolada : public Poklon
{

private:

	double procenatKakaa;

public:

	Cokolada();
	Cokolada(double _cena, int _brojMasnica, double _procenatKakaa);

	// Ako se trazi u zadatku a trazi se, da napravimo kopiju paketica
	// to znaci da sve klase koje se nalaze u tom paketicu treba da imaju copy construktor 

	Cokolada(const Cokolada& c);  // Copy construktor 
	virtual ~Cokolada();

	void prikazi(ostream& izlaz) const;

	int vratiBrojMasnica() const;
};
