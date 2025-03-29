#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Predmet
{
private:

	double masa;
	double vrednost;

public:

	Predmet();
	Predmet(double m, double v);
	virtual ~Predmet();

	// Sve funkcije su inline sto znaci da se svaka funkcija se implementira u svojim .cpp fajlovima!!

	virtual void vratiVrednost();
	virtual void vratiMasu();
	virtual void prikazi(ostream& izlaz) = 0; // Apstrakta funkcija
};

#include <Predmet.h>

Predmet::Predmet()
{
	masa = 0;
	vrednost = 0;
}
Predmet::Predmet(double m, double v)
{
	masa = m;
	vrednost = v;
}
Predmet::~Predmet()
{
}
void Predmet::vratiVrednost()
{
	return vrednost;
}
void Predmet::vratiMasu()
{
	return masa;
}
