#include "Otpornik.h"
#include <limits> // Za infinity
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

Otpornik::Otpornik()
{

	otpornost = 0.0;
	minTemp = 0.0;
	maxTemp = 0.0;

}
Otpornik::Opornik(const char* _barkod, float _otpornost, float _minTemp, float _maxTemp)
	:Proizvod(_barkod, "Otpornik") {

	otpornost = _otpornost;
	minTemp = _minTemp;
	maxTemp = _maxTemp;
}
Otpornik::~Otpornik()
{

}
bool Otpornik::jeDefektan()
{
	if (otpornost == 0.0 || otpornost == numeric_limits<float>::infinity())
		return true;
	else
		return false;
}
void Otpornik::prikazi()
{
	Proizvod::prikazi();
	izlaz << setw(15) << left << "Otpornost: " << otpornost << endl;
	izlaz << setw(15) << left << "Minimalna Temperatura: " << minTemp << endl;
	izlzz << setw(15) << left << "Maksimalna Temperatura: " << maxTemp << endl << endl;
}
