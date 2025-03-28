#pragma once

class PojedinacniPaket
{
private:

	int brPretplacenihMin;
	int cenaPoMinuti;
	int kolicinaPodatakaUPretplati;
	int cenaPoJedinici;

public:

	PojedinacniPaket();
	PojedinacniPaket(int brPrMin);
	virtual ~PojedinacniPaket();
	const int vratiPretplaceneMinute() { return brPretplacenihMin; }
	const int vratiPodatkeUPretplati() { return kolicinaPodatakaUPretplati; }
	void prikazi();
		
};

#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Paket
{
private:

	char* vrstaPaketa;
	int brojPretplacenihMinuta; // Izmedju 100min i 2000min
	int cenaMinuta;
	int kolicinaPodatakaUPretplati; // Izmedju 1gb i 10gb
	int cenaPoJedinici; 

public:

	Paket();
	Paket(char* vrsta,int brPrMin, int kolPodaPret);
	virtual ~Paket();

	virtual void zameniBrojPretplacenihMinuta(double novi);
	virtual void zameniProcentualniParametar() = 0;
	virtual void zameniBrojDece(double novi) = 0;

	inline const char* vratiVrstuPaketa() { return vrstaPaketa; }
	virtual double vratiBrojminuta() = 0;
	virtual double vratiBrojPodataka() = 0;
	virtual void Prikazi(ostream& izlaz);
	virtual void zaUplatu() = 0;

};

#include "Paket.h"

Paket::Paket()
{
	vrstaPaketa = nullptr;
	brojPretplacenihMinuta = 0;
	cenaMinuta = 0;
	kolicinaPodatakaUPretplati = 0;
	cenaPoJedinici = 0;
}
Paket::Paket(const char* vrsta, int brPrMin, int kolPodaPret)
{

	vrstaPaketa = new char[strlen(vrsta) + 1];
	strcpy(vrstaPaketa, vrsta);

	// ovde resavam one uslove od-do
	if (brPrMin < 100) {
		brojPretplacenihMinuta = 100;
	}
	else if (brMin > 2000) {
		brojPretplacenihMinuta = 2000;
	}
	else {
		brojPretplacenihMinuta = brPrMin;
	}

	if (kolicinaPodatakaUPretplati < 1) {
		kolPodaPret = 1;
	}
	else if (kolicinaPodatakaUPretplati > 10) {
		kolicinaPodatakaUPretplati = 10;
	}
	else {
		kolicinaPodatakaUPretplati = kolPodaPret;
	}
	
}
Paket::~Paket()
{
	if (vrstaPaketa != nullptr)
		delete[] vrstaPaketa;
}
void Paket::zameniBrojPretplacenihMinuta(double novi)
{
	if (novi < 100) {
		brojPretplacenihMinuta = 100;
	else if (novi > 2000) {
		brojPretplacenihMinuta = 2000;
	}
	else {
		brojPretplacenihMinuta = brPrMin;
	}
  }
}
void Paket::Prikazi(ostream& izlaz)
{
	izlaz << "Imate vrstu paketa: " << vrstaPaketa << "," << "Broj minuta: " << brojPretplacenihMinuta << ", " << "Kolicina podataka: " << kolicinaPodatakaUPretplati << endl;
}
