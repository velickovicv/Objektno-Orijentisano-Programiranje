#include "Preduzece.h"
#include "Domacinstvo.h"
#include "SolarnaDomacinstva.h"
#include <iostream>
using namespace std;

int main()
{
	Preduzece* p = new Preduzece(10);

	Domacinstvo* d1 = new Domacinstvo(1, 36.2, 156.1);
	Domacinstvo* d2 = new Domacinstvo(2, 76.5, 341.7);
	Domacinstvo* d3 = new SolarnoDomacinstvo(3, 43.8, 265.3, 55.1, 1.55, 2000);
	Domacinstvo* d4 = new SolarnoDomacinstvo(4, 87.9, 501.55, 89.3, 1.33, 5000);

	p->dodaj(d1);
	p->dodaj(d2);
	p->dodaj(d3);
	p->dodaj(d4);

	p->preikazi(cout);

	cout << "\nProsecna potrosnja po m^2: " << p->prosecnaPotrosnja() << "kWh/m^2\n";

	Domacinstvo* najmanje = p->najmanjaSvota(10);
	if (najmanje != nullptr)
	{
		cout << "Najmanji trosak:\n";
		najmanje->ispisi(ispisi);
		cout << "Cena struje: " << najmanje->getCenapotrosnje() << "din\n";
	}

	delete p;
	return 0;
}

