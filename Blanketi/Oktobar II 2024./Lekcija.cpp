#include "Lekcija.h"

Lekcija::Lekcija()
{
   float duzinaUstranicama;
}
Lekcija::Lekcija(int _oznaka, double _tezina, double _duzinaUstranicama)
	:IspitniMaterijali(_oznaka, _tezina)
{
	duzinaUstranicama = _duzinaUstranicama;
}
Lekcija::Lekcija(const Lekcija& l)
{
	duzinaUstranicama = l.duzinaUstranicama;
}
Lekcija::~Lekcija()
{
}
float Lekcija::vratiVreme(int vreme)
{
	return (float)tezina * (float)duzinaUstranicama * vreme;
}
void Lekcija::stampaj(ostream& izlaz)
{
	izlaz << "LEKCIJA" << endl
		<< "oznaka: " << oznaka << endl
		<< "tezina: " << tezina << endl
		<< "status: " << status << endl
		<< "stranice: " << duzinaUstranicama << endl;
}
