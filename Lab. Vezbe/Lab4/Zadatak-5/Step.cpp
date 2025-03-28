#include "Step.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

Step::Step()
{
	naziv = nullptr;
	tip = nullptr;
}
Step::Step(const char* nnaziv, const char* ttip)
{
	naziv = new char[strlen(nnaziv) + 1];
	strcpy(naziv, nnaziv);

	tip = new char[strlen(ttip) + 1];
	strcpy(tip, ttip);
}
Step::~Step()
{
	if (naziv != nullptr)
		delete[] naziv;

	if (tip != nullptr)
		delete[] naziv;
}
Step::Step(const Step& s)
{
	if (s.naziv) {

		naziv = new char[strlen(s.naziv) + 1];
		strcpy(naziv, s.naziv);
	}
	else {
		naziv = nullptr;
	}

	if (s.tip) {

		tip = new char[strlen(s.tip) + 1];
		strcpy(tip, s.tip);
	}
	else{
		tip = nullptr;
	}
}
void Step::Step(ostream& izlaz)
{
	izlaz << left << setw(14) << naziv << ", " << setw(8) << tip << ", ";
}
