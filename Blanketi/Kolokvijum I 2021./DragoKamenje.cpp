#pragma once
#include <Predmet.h>

class DragoKamenje : public Predmet
{
private:

	char* boja;
	int rez;
	double cistocaKamenja;

public:

	DragoKamenje();
	DragoKamenje(double m, double ck, char* bboja, int rez);
	~DragoKamenje();
	void prikazi(ostream& izlaz);

};

#include "DragoKamenje.h"

DragoKamenje::DragoKamenje()
{
	boja = nullptr;
	rez = 0;
	cistocaKamenja = 0.0;
}
DragoKamenje::DragoKamenje(double m, double ck, char* bboja, int rrez)
	:Predmet(m, m*ck) {

	cistocaKamenja = ck;
	rez = rrez;

	boja = new char[strlen(b) + 1];
	strcpy(boja, bboja);
	    
	if (ck > 1.0) {
			cistocaKamenja = 1.0;
	}
	else if (ck < 0.0) {
			cistocaKamenja = 0.0;
	}
	else {
			cistocaKamenja = ck;
	}

}
DragoKamenje::~DragoKamenje()
{
	if (boja != nullptr)
		delete[] boja;
}
DragoKamenje::prikazi(ostream& izlaz)
{
	izlaz << "Boja kamena: " << boja << "Masa kamena iznosi: " << masa << ", "<< "Rez kamena: " << rez << "Vrednost kamena iznosi: " << return vrednost() << endl;
}
