#include "Step.h"
#include <iostream>
#include <fstream>
using namespace std;

class State : public Step
{
private:
	
	int prioritet;

public:

	State();
	State(char* nnaziv, int pprioritet);
	virtual ~State();
	State(Stape* s) : Step(s) {
		prioritet = s->GetSpecAttribute();
	}

	virtual int GetSpecAttribute() { return prioritet; }
	virtual void Prikazi(ostream& izlaz);
	friend istream& operator >>(istream& ulaz, State& s)
};
