#include "PutAutobusom.h"

PutAutobusom::PutAutobusom()
	:Put()
{
	ukupnoKm = 0;
	cenaGorivaPoLitru = 0;
	potrosnjaGoriva = 0;
	brojNociUAutobusu = 0;
}
PutAutobusom::PutAutobusom(char* _imeGrada, int _maxPutnika, int _brojNocenja, double _cenaPoNocenju, int _ukupnoKm, double _cenaGorivaPoLitru, double _potrosnjaGoriva, int _brojNociUAutobusu)
	:Put(_imeGrada, _maxBrPutnika, _brojNocenja, _cenaPoNocenju) {

	ukupnoKm = _ukupnoKm;
	cenaGorivaPoLitru = _cenaGorivaPoLitru;
	potrosnjaGoriva = _potrosnjaGoriva;
	brojNociUAutobusu = _brojNociUAutobusu;
}
PutAutobusom::~PutAutobusom()
{

}
double PutAutobusom::cenaZaAgenciju()
{
	double utrosakGoriva = ((ukupnoKm * potrosnjaGoriva) / 100) * cenaGorivaPoLitru;

	return (utrosakGoriva * 1.25) + (maxPutnika * getCenaPoSmestaju());
}
double PutAutobusom::cenaZaPutnika()
{
	return (this->getCenaZaAgenciju() / maxPutnika) * 1.35);
}
void PutAutobus::prikaziPut(ostream& izlaz)
{
	izlaz << left << setw(25) << "PUT AUTOBUSOM:" << endl;
	izlaz << "-----------------------------------\n";

	Put::prikaziPut(izlaz);

	izlaz << left << setw(25) << "UKUPNO KM: ";
	izlaz << left << ukupnaKm << endl;

	izlaz << left << setw(25) << "CENA GORIVA: ";
	izlaz << left << cenaGorivaPoLitru << endl;

	izlaz << left << setw(25) << "POTROSNJA: ";
	izlaz << left << potrosnja << endl;

	izlaz << left << setw(25) << "BROJ NOCI U AUTOBUSU: ";
	izlaz << left << brojNociUAutobusu << endl;

	izlaz << left << setw(25) << "CENA ZA AGENCIJU: ";
	izlaz << left << getCenaZaAgenciju() << endl;

	izlaz << left << setw(25) << "CENA PO PUTNIKU: ";
	izlaz << left << getCenaPoPutniku() << endl << endl;
}
