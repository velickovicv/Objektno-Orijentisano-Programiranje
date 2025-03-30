#pragma once
#include "Predmet.h"
#include <iostream>
#include <fstream>
using namespace std;

class Ranac
{
private:

	int n;
	Predmet** niz;
	int trbr;

public:

	Ranac();
	Ranac(int nn, char* vrsta);
	~Ranac();

	void dodajPredmet(Predmet* p);
	void prikazi(ostream& izlaz);
	double srednjaVrednost();
	Predmet* najvrednijiPredmet();
};
