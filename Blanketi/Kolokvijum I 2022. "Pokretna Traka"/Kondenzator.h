#pragma once
#include "Proizvod.h"

class Kondenzator : public Proizvod
{

private:

	float c;

public:

	Kondenzator();
	Kondenzator(const char* _barkod, float _c);
	virtual ~Kondenzator(); { }

	virtual void jeDefektan();
	virtual void prikazi(ostream& izlaz);

};
