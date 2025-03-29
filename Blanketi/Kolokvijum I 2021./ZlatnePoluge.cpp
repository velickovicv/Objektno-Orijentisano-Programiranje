#include "Predmet.h"

class ZlatnePoluge : public Predmet
{
private:

	double stepenCistoce;

public:

	ZlatnePoluge();
	ZlatnePoluge(double m, double sc);
	virtual ~ZlatnePoluge
	void prikazi(ostream& izlaz)
};

#include <ZlatnePoluge.h>

ZlatnePoluge::ZlatnePoluge()
	:Predmet() {
	stepenCistoce = 0;
}
ZlatnePoluge::ZlatnePoluge(double m, double sc)
	:Predmet(m, (((sc > 24) ? 24 : sc)/24)*m) {
	if (stepenCistoce > 24) {
		stepenCistoce = 24;

	}
	else {
		stepenCistoce = sc;
	}
}
ZlatnePoluge::ZlatnePoluge()
{
}
void ZlatnePoluge::prikazi(ostream& izlaz)
{
	izlaz << "Stepen cistoce zlata je: " << stepenCistoce << "Masa: " << vratiMasu() << "Vrednost: "
}
