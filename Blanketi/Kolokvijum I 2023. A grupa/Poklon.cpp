#include "Poklon.h"

Poklon::Poklon()
{
	cena = 0;
	brojMasnica = 0;

}

// Dodela vrednosti atributa unutra tela konstruktora
// **Ne moze se koristiti za const clanove i reference!!!

Poklon::Poklon(double _cena, int _brojMasnica)
{
	cena = _cena;
	brojMasnica = _brojMasnica;
}

// Dodela vrednosti atributa preko inicijalizacione liste

// Poklon::Poklon(double _cena, int _brojMasnica)
//   :cena(_cena), brojMasnica(_brojMasnica) 
// {
// }

Poklon::Poklon(const Poklon& p)
{
	cena = p.cena;
	brojMasnica = p.brojMasnica;
}
Poklon::~Poklon()
{

}

void Poklon::print(ostream& izlaz) const
{
	izlaz << "Cena" << cena << "\nBroj masnica" << brojMasnica << endl;
}
ostream& operator<<(ostream& izlaz, const Poklon& p)
{
	p.print(izlaz);
	return izlaz;  // Kada radimo overloading << operator, moramo vratiti referencu na izlazni tok da bi mogli ispisati objekat

}
