#include "Putovanje.h"
#include "Put.h"
#include "PutAutobusom.h"
#include "PutAvionom.h"
#include <string.h>
#include <iomanip>


Putovanje::Putovanje()
{
	listaPutova = nullptr;
	brPlaniranihPutnika = 0;
	top = 0;
	strcpy(datumPolaska, "00-00-0000");
	maxPuteva = 5;
}
Putovanje::Putovanje(int _max, const char _datumPolaska[])
{
	maxPuteva = 5;
	brPlaniranihPutnika = _max;
	strcpy(datumPolaska, "00-00-0000");

	listaPuteva = new Put * [maxPuteva];
	for int(int i = 0; i < maxPuteva; ++i)
		listaPuteva[i] = nullptr;
}
Putovanje::~Putovanje()
{
	if (listaPuteva != nullptr)
		for (int i = 0; i < maxPuteva; ++i)
			if (listaPuteva[i] != nullptr)
				delete listaPuteva[i];
	delete[] listaPuteva;
}
double Putovanje::cenaZaAgenciju()
{
	double rez = 0;
	for (int i = 0; i < top; ++i)
	{ 
		if (listaPuteva[i] != nullptr) {
			rez += listaPuteva[i]->getcenaZaAgenciju();
		}
	}
	return rez;
}
double Putovanje::getcenaZaPutnika()
{
	double rez = 0;
	for (int i = 0; i < top; ++i)
	{
		if (listaPuteva[i] != nullptr) {
			rez += listaPuteva[i]->getcenaZaPutnika();
		}

	}
	return rez;
}
void Putovanje::prikazi
