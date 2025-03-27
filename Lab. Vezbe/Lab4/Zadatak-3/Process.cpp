#include "Process.h"
#include <iostream>
using namespace std;

Process::Process()
{
	sifra = 0;
	stanje = 0;
	tip = 0
}
Process::Process(int ssifra, int ttip)
{
	this->sifra = ssifra;
	this->tip = ttip;
	this->stanje = 0;
}
Process::~Process()
{

}
void Process::prikazi()
{
	cout << "Sifra: " << sifra << ", Stanje: " << stanje, << ", Tip: " << tip << endl;
}
