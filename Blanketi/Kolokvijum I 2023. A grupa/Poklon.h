#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Poklon
{

private:

	double cena;
	int brojMasnica;

public:

	Poklon();
	Poklon(double _cena, int _brojMasnica);
	Poklon(const Poklon& p);   // Copy construktor 
	virtual ~Poklon();

	friend ostream& operator<<(ostream& izlaz, const Poklon& p);
	virtual int vratiBrojMasnica() const = 0;

	virtual void prikazi(ostream& izlaz) const = 0;


};
