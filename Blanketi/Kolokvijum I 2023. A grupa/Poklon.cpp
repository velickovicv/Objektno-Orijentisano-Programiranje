#include "Poklon.h"

Poklon::Poklon()
{
	cena = 0.0;
	brojMasnica = 0;
}

// Dobra praksa jer je efikasnije, direktno se incijalizuje prilikom kreiranja
// umesto da se prvo uzima podrazumevana vrednost, pa se onda menja

Poklon::Poklon(double _cena, int _brojMasnica)    
	:cena(_cena), brojMasnica(_brojMasnica)
{

}
Poklon::Poklon(const Poklon& p)
{
	cena = p.cena;
	brojMasnica = p.brojMasnica;
}
Poklon::~Poklon()
{

}
void Poklon::prikazi(ostream& izlaz) const
{
	izlaz << "Cena: " << cena << "\nBroj masnica: " << brojMasnica << endl;
}
ostream& operator<<(ostream& izlaz, const Poklon& p)
{
	p.prikazi(izlaz);
	return izlaz;
}

