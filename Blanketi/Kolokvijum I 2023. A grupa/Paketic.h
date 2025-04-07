#pragma once
#include <iostream>
#include <fstream>

class Paketic
{

private:

	Poklon** niz;
	int top;
	int maxEl;

	void zauzmiMem(int n);
	void oslobodiMem();

public:

	Paketic(int maxEl);
	Paketic(const Paketic& p);
	~Paketic();


	int brojPoklona() const;

	void Add(Poklon* p);

	friend ostream& operator<<(ostream& izlaz, const Paketic& p);
	Paketic operator+(Paketic p);

	void Save(const char* imeFajla);

	Poklon* Max() const;

	void izbaciPoklon(Poklon** p);
};
