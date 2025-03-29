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
	virtual void prikazi(ostream& izlaz) = 0;
};
