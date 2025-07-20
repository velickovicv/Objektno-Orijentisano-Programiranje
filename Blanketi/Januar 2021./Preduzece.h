#pragma once
#include "Domacinstvo.h"
#include "SolarnaDomacinstva.h"

class Preduzece
{
	Domacinstvo** niz;
	int maxEl;
	int top;

public:

	Preduzece();
	Preduzece(int _maxEl);
	virtual ~Preduzece();

	void prikazi(ostream& izlaz);
	void dodaj(Domacinstvo* d);
	void izbaci(int broj);
	double prosecnaPotrosnja();

	Domacinstvo* najmanjaSvota(double cena);
	Domacinstvo* najvecaSvota(double cena);

};
