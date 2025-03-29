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
