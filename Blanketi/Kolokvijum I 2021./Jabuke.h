#include "Predmet.h"

class Jabuke : public Predmet
{
private:

	double koeficijentSlatkoce;
	double koeficijentKiselosti;
	char* boja;

public:

	Jabuke();
	Jabuke(double m, double ks, double kk, char* b);
	~Jabuke();


	void prikazi(ostream& izlaz);
};
