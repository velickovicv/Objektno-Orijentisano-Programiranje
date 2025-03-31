#pragma once	
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Proizvod
{
private:

	char* barkod[6];
	char* tip;

public:

	Proizvod();
	Proizvod(const char* _barkod, const char* _tip);
	~Proizvod();

	char* getTip() { return tip; }

	virtual bool jeDefektan() = 0;
	virtual void prikazi(ostream& izlaz);
};
