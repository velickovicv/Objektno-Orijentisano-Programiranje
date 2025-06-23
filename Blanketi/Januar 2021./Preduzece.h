#pragma once
#include "Domacinstvo.h"
#include "SolarnoDomacinstvo.h"
#include <iostream>
using namespace std;

class Preduzece
{

private:

	Domacinstvo** niz;
	int n;
	int trbr;


public:

	Preduzece();
	Preduzece(int n);
	virtual ~Preduzece();

	void dodajDomacinstvo(Domacinstvo* d);
	void ukloniDomacinstvo(int brojId);

	void prikazi(ostream& izlaz);
	double prosecnaPotrosnja();

	Domacinstvo* najmanjaSvota(double cena);
	Domacinstvo* najvecaSvota(double cena);
};
