#include "Proizvod.h"
#include <iomanip>

Proizvod::Proizvod()
{
	strcpy(barkod, "000000"); // Kada je u zadatku dato da ima [6] onda nije unos sa tastature nego definisan
	tip = nullptr;
}
Proizvod::Proizvod(const char* _barkod, const char* _tip)
{
	
	strcpy(barkod, _barkod);

	tip = new char[strlen(_tip) + 1];
	strcpy(tip, _tip);
}
Proizvod::~Proizvod()
{
	if (tip != nullptr)
		delete[] tip;
}
void Proizvod::prikazi(ostream& izlaz)
{
	izlaz << tip << endl;
	izlaz << setw(15) << left << "BARKOD: " << barkod << endl;
	// izlaz << barkod << "(" << tip << "):\n";
}
