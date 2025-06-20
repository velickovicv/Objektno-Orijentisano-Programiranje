#include "Domacinstvo.h"

Domacinstvo::Domacinstvo()
{
	brojId = 0;
	povrsina = 0;
	potrosnja = 0;

}
Domacinstvo::Domacinstvo(int _brojId, double _povrsina, double _potrosnja)
{
	brojId = _brojId;
	povrsina = _povrsina;
	potrosnja = _potrosnja;

}
Domacinstvo::~Domacinstvo()
{

}
void Domacinstvo::Domacinstvo(ostream& izlaz)
{
	izlaz << "DOMACINSTVO: " << endl;
	<< "Broj domacinstva: " << brojId << endl
		<< "Povrsina objekta: " << povrsina << endl
		<< "Potrosnja: " << potrosnja << endl
		<< "----------------------------" << endl;
}
