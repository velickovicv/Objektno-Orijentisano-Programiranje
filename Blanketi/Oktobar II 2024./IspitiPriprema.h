#pragma once
#include "IspitniMaterijali.h"

class IspitPriprema 
{

private:

	IspitniMaterijali** niz;
	int nmax;
	int trbr;

public:

	IspitPriprema();
	IspitPriprema(int nmax);
	~IspitPriprema();


	void dodajMaterijal(IspitniMaterijal* im);
	void obrisiMaterijal(int oznaka);
	void savladaj(int oznaka);
	int ukupnoSavladanih();
	float ukupnoVreme(int vreme);
	void vratiNaj(int vreme, IspitniMaterijal** min, IspitniMaterijal** max);


	friend ostream& operator<<(ostream& izlaz, IspitPriprema& ip);
};
