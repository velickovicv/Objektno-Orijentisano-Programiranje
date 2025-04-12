#include "Dnevna.h"

Dnevna::Dnevna()
	:Karta() {

}
Dnevna::Dnevna(int _id, int _redniBrojDana, int _brojDanaVazenja, double _osnCena, double _popust)
	:Karta("Dnevna-Karta", _id, _redniBrojDana, _brojDanaVazenjam, _osnCena, _popust) {

}
Dnevna::~Dnevna()
{
}
Dnevna::getCena()
{
	double zbirniPopust = (popust + brojDanaVazenja) * 0.2;
	return (osnovnaCenaKarte + zbirniPopust);
}
Dnevna::produzi(int _za)
{
	brojDanaVazenja += _za;
}
Dnevna::prikazi(ostream& izlaz)
{
	Karta::prikazi(izlaz);
	izlaz << "#############################-KRAJ\n\n";
}
