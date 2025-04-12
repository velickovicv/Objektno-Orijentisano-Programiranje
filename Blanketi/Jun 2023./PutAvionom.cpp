#include "PutAvionom.h"
#include <string.h>
#include <iomanip>

PutAvionom::PutAvionom()
{
	imeKompanije = nullptr;
	duzinaLeta = 0;
	cenaMestaPoPutniku = 0;
}
PutAvionom::PutAvionom(char* _imeGrada, int _maxBrPutnika, int _brojNocenja, double _cenaPoNocenju, char* _imeKompanije, int _duzinaLeta, double _cenaMestaPoPutniku)
	: Put(_imeGrada, _maxBrPutnika, _brojNocenja, _cenaPoNocenju)
{
	imeKompanije = new char[strlen(_imeKompanije) + 1];
	strcpy(imeKompanije, _imeKompanije);

	duzinaLeta = _duzinaLeta;
	cenaMestaPoPutniku = _cenaMestaPoPutniku;
}
PutAvionom::~PutAvionom()
{
	if (imeKompanije != nullptr)
		delete[] imeKompanije;
}
void PutAvionom::prikazi(ostream& izlaz)
{
	izlaz << left << setw(25) << "IME KOMPANIJE: ";
	izlaz << left << imeKompanije << endl;

	izlaz << left << "DUZINA LETA: ";
	izlaz << left << duzinaLeta << endl;

	izlaz << left << "CENA MESTA PO PUTNIKU: ";
	izlaz << left << cenaMestaPoPutniku << endl;
}
