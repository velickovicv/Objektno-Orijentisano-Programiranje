#pragma once
#include "IspitniMaterijal.h"

class Lekcija : public IspitniMaterijal
{

private:

	float duzinaUStranicama;

public:

	Lekcija();
	Lekcija(int oznaka, float tezina, float duzinaUStranicama);
	Lekcija(const Lekcija& l);
	virtual ~Lekcija();

	float vratiVreme(int vreme);

	void prikazi(ostream& izlaz);

};
