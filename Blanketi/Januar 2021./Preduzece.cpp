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

#include "Preduzece.h"

Preduzece::Preduzece()
{
	niz = nullptr;
	maxEl = 0;
	top = 0;
}

Preduzece::Preduzece(int mmaxEl)
{
	maxEl = mmaxEl;
	niz = new Domacinstvo * [maxEl];
	for (int i = 0; i < maxEl; i++)
		niz[i] = nullptr;
	top = 0;
}
Preduzece::~Preduzece()
{
	if (niz != nullptr)
	{
		for (int i = 0; i < top; i++)
			delete[] niz[i];
		delete[] niz;
	}
}
void Preduzece::prikazi(ostream& izlaz)
{
	for (int i = 0; i < top; i++)
		niz[i]->ispisi(izlaz);
}
void Preduzece::dodaj(Domacinstvo* d)
{
	if (top < maxEl)
		niz[top++] = d;
}
void Preduzece::izbaci(int broj)
{
	for (int i = 0; i < top; i++)
	{
		if (niz[i]->getJedinstveniBroj() == broj)
		{
			delete[] niz[i];
			for (int j = i; j < top; j++)
				niz[j] = niz[j + 1];
			top--;
			niz[top] = nullptr;
		}
	}
}
double Preduzece::prosecnaPotrosnja()
{
	double ukupnaPotrosnja = 0, ukupnaPovrsina = 0;
	for (int i = 0; i < top; i++) {
		ukupnaPotrosnja += niz[i]->Getpotrosnja();
		ukupnaPovrsina += niz[i]->GetpovrsinaObjekti();
	}
	return ukupnaPotrosnja / ukupnaPovrsina;
}
Domacinstvo* Preduzece::najmanjaSvota(cena)
{
	int minInd = 0;
	double rez = niz[0]->getCenapotrosnje(cena);

	for (int i = 1; i < top; i++)
	{
		if (niz[i]->getCenapotrosnje(cena) < rez)
		{
			rez = niz[i]->getCenapotrosnje(cena);
			minInd = i;
		}
	}
	return niz[minInd];
}
Domacinstvo* Preduzece::najvecaSvota(cena)
{
	int maxInd = 0;
	double rez = niz[0]->getCenapotrosnje(cena);

	for (int i = 0; i < top; i++)
	{
		if (niz[i]->getCenapotrosnje(cena) > rez)
		{
			rez = niz[i]->getCenapotrosnje(cena);
			maxInd = i;
		}
	}
	return niz[maxInd];

}
