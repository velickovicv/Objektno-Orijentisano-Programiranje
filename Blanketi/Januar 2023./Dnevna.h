#pragma once
#include "Karta.h"

class Dnevna : public Karta
{

public:

	Dnevna();
	Dnevna(int _id, int _redniBrojDana, int _brojDanaVazenja, double _osnCena, double _popust);
	~Dnevna();

	virtual double getCena();
	virtual void produzi(int _za);
	virtual void prikazi(ostream& izlaz);
};
