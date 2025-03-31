#pragma once
#include "Proizvod.h"

class Otpornik : public Proizvod
{

private: 

	float otpornost;
	float minTemp;
	float maxTemp;

public:

	Opornik();
	Otpornik(const char* _barkod, float _otpornost, float _minTemp, float _maxTemp);
	virtual ~Otpornik() { };

	virtual bool jeDefektan();
	virtual void prikazi();

};
