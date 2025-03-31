#include "Kondenzator.h"
#include <iomanip>

Kondenzator::Kondenzator()
{
  c = 0.0;
}
Kondenzator::Kondenzator(const char* _barkod, float _c)
	:Prozivod(_barkod, "Kondenzator") {

	c = c_;
}
Kondenzator::~Kondenzator()
{

}
void Kondenzator::jeDefektan()
{
	if (c == 0.0)
		return true;
	else
		return false;
}
void Kondenzator::prikazi(ostream& izlaz)
{
	Proiavod::prikaz(izlaz);
	izlaz << setw(15) << left << "KAPACITIVNOST: " << c << endl << endl;
}
