#include "SolarnoDomacinstvo.h"

SolarnoDomacinstvo::SolarnoDomacinstvo()
{
	dobijenaEnergija = 0;
	koefpod = 0;
	cenaodrz = 0;
}
SolarnoDomacinstvo::SolarnoDomacinstvo(int _brojId, double _povrsina, double _potrosnja, double _dobe, double _koefpod, double _cenaodrz)
:Domacinstvo(_brojId, _povrsina, _potrosnja)
{
	dobijenaEnergija = _dobe;
	koefpod = _koefpod;
	cenaodrz = _cenaodrz;
}
SolarnoDomacinstvo::~SolarnoDomacinstvo()
{

}
double SolarnoDomacinstvo::cenaPotrosnje(double cena)
{
	double rez = cena * potrosnja + cenaodrz -
		dobijenaEnergija * cena * koefpod;
	return rez;
}
void SolarnoDomacinstvo::ispisi(ostream& izlaz)
{
	izlaz << "SOLARNO DOMACINSTVO: " << endl
		<< "Broj domacinstva: " << brojDom << endl
		<< "Povrsina pod objektima: " << povrsinaObjekti << endl
		<< "Potrosnja: " << potrosnja << endl
		<< "Dobijena Energija: " << dobijenaEnergija << endl
		<< "Koeficient podsticaja: " << koefPodsticaja << endl
		<< "Cena odrzavanja: " << odrzavanje << endl
		<< "--------------------------------------------------" << endl;
}
