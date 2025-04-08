#include "Lekcija.h"

Lekcija::Lekcija()
	:IspitniMaterijal()
{
	duzinaUstranicama = 0;
}
Lekcija::Lekcija(int oznaka, float tezina, float duzinaUStranicama)
	:IspitniMaterijal(oznaka, tezina)
{
	this->duzinaUStranicama = duzinaUStranicama;
}
Lekcija::Lekcija(const Lekcija& l)
	:IspitniMaterijal(l)
{
	duzinaUStranicama = l.duzinaUStranicama;
}
Lekcija::~Lekcija()
{

}
float Lekcija::vratiVreme(int vreme)
{
	return (float)tezina * (float)duzinaUStranicama * vreme;
}
void Lekcija::stampaj(ostream& izlaz)
{
	izlaz << "LEKCIJA" << endl
		<< "oznaka: " << oznaka << endl
		<< "tezina: " << tezina << endl
		<< "status: " << status << endl
		<< "stranice: " << stranice << endl;
}
