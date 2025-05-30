#pragma once
#include "IspitniMaterijali.h"

class Lekcija : public IspitniMaterijali
{

private:

	double duzinaUstranicama;

public:

	Lekcija();
	Lekcija(int _oznaka, double _tezina, bool _status, double _duzinaUstranicama);
	Lekcija(const Lekcija& l);
	~Lekcija();

	float vratiVreme(int vreme);

	void stampaj(ostream& izlaz);

};
