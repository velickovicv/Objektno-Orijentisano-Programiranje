#include "Igracka.h"
#include <string.h>

Igracka::Igracka()
{
	tipMaterijala = nullptr;
}
Igracka::Igracka(double _cena, int _brojMasnica, const char* _tipMaterijala)
	:Poklon(_cena, _brojMasnica)
{
	this->tipMaterijala = new char[strlen(_tipMaterijala) + 1];
	strcpy(this->tipMaterijala, _tipMaterijala);
}
Igracka::Igracka(const Igracka& i) : Poklon(i)
{
	this->tipMaterijala = new char[strlen(i._tipMaterijala) + 1];
	strcpy(this->tipMaterijala, i.tipMaterijala);
}
Igracka::~Igracka()
{
	if (tipMaterijala != nullptr)
		delete[] tipMaterijala;
}
void Igracka::prikazi(ostream& izlaz) const
{
	Poklon::prikazi(izlaz);
	izlaz << "Tip materijala: " << tipMaterijala << endl;
	izlaz << endl;
}
int Igracka::vratiBrojMasnica() const
{
	return 2 + brojMasnica;
}
