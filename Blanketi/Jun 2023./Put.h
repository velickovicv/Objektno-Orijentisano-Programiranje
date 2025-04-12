#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Put
{
private:

	char* grad;
	int maxPutnika;
	int brNocenja;
	double cenaNocenja;

public:

	Put();
	Put(const char* _grad, int _maxPutnika, int _brNocenja, double cenaNocenja);
	~Put();

	
	int getBrojNocenja() { return brNocenja; }
	double getCenaPoSmestaju() { return brNocenja * cenaNocenja; }
	int getMaxPutnika() { return maxPutnika; }
	char* getImeGrada() { return grad; }

	virtual double getCenaZaAgenciju() = 0;
	virtual double getCenaZaPutnika() = 0;

	void prikazi(ostream& izlaz);

};
