#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class IspitniMaterijali
{

private:

	int oznaka;
	double tezina;
	bool status;

public:

	IspitniMaterijali();
	IspitniMaterijali(int _oznaka, float _tezina, bool _status);
	IspitniMaterijali(const IspitniMaterijali& im);
	virtual ~IspitniMaterijali();

	int vratiOznaku();
	bool jeSavladan();
	void savladaj();


	// Virtualna f-ja, omogucava polimorfizam. Treba vratiti vreme za koje mogu se preci ispitni materijali
	// Posto postoje dva ispitna materijala, lekcije i zadaci, da bi f-ja znala da za koju klasu treba da se pozove, dodajemo virtual i mi je pozivamo u odgovarajucoj klasi

	virtual float vratiVreme(int vreme) = 0;


	// Isto vazi i za stampanje, da bi mogli istu funkciju da koristimo u vise klasa

	virtual void stampaj(ostream& izlaz) = 0;

	// Friend f-ja, pristupa privatnim clanovima klase, da bi mogao da ih istampa, 
	// jer u zadatku pise, da u svakom trenutku mogu da pogledaju(istampaju) ispitne materijali

	friend ostream& operator<<(ostream& izlaz, IspitniMaterijali& im); 
};
