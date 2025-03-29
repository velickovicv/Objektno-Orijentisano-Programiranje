#include <Predmet.h>

class DragoKamenje : public Predmet
{
private:

	char* boja;
	int rez;
	double cistocaKamenja;

public:

	DragoKamenje();
	DragoKamenje(double m, double ck, char* boja, int rez);
	~DragoKamenje();
	void prikazi(ostream& izlaz);

};
