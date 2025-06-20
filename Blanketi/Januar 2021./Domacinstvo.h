#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Domacinstvo
{

private:

	int brojId;
	double povrsina; // m^2
	double potrosnja;

public:

	Domacinstvo();
	Domacinstvo(int _brojId, double _povrsina, double potrosnja);
	virtual ~Domacinstvo();

	int getbrojId() { return brojId; }
	virtual double cenaPotrosnje(double cena) { return potrosnja * cena; }
	double getpovrsina() { return povrsina; }
	double getpotrosnja() { return potrosnja; }
	virtual void ispisi(ostream& izlaz);

};
