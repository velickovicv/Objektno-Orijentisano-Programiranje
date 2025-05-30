#include "Zadaci.h"

Zadaci::Zadaci()
{
	linijekoda = 0;
}
Zadaci::Zadaci(int _oznaka, double _tezina, bool _status, int _linijekoda)
	:IspitniMaterijali(_oznaka, _tezina, _status)
{
	linijekoda = _linijekoda;
}
Zadaci::Zadaci(const Zadaci& z)
{
	linijekoda = z.linijekoda;
}
Zadaci::~Zadaci()
{
}
float Zadaci::vratiVreme(int vreme)
{

	return (int)linijekoda * (float)tezina * vreme * 0.05f;
}
void Zadatak::stampaj(ostream& izlaz)
{
	izlaz << "ZADATAK" << endl
		<< "oznaka: " << oznaka << endl
		<< "tezina: " << tezina << endl
		<< "status: " << status << endl
		<< "linije: " << linije << endl;
}
