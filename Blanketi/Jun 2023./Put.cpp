#include "Put.h"
#include <string.h>
#include <fstream>
#include <iomanip>
using namespace std;

Put::Put()
{
	grad = nullptr;
	maxPutnika = 0;
	brNocenja = 0;
	cenaNocenja = 0.0;
}
Put::Put(const char* _grad, int _maxPutnika, int _brNocenja, double _cenaNocenja)
{
	grad = new char[strlen(_grad) + 1];
	strcpy(grad, _grad);

	maxPutnika = _maxPutnika;
	brNocenja = _brNocenja;
	cenaNocenja = _cenaNocenja;
}
Put::~Put()
{
	if (grad != nullptr)
		delete[] grad;
}
void Put::prikazi(ostream& izlaz)
{
	izlaz << left << setw(25) << "IME GRADA: ";
	izlaz << left << grad << endl;

	izlaz << left << setw(25) << "MAX BROJ PUTNIKA: ";
	izlaz << left << maxPutnika << endl;

	izlaz << left << setw(25) << "BROJ NOCENJA: ";
	izlaz << left << brNocenja << endl;

	izlaz << left << setw(25) << "CENA NOCENJA: ";
	izlaz << left << cenaNocenja << endl;

}
