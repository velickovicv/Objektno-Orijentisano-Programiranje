#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Poklon
{

private:

	double cena;
	int brojMasnica;

public:

	Poklon(); // Default konstruktor
	Poklon(double _cena, int _brojMasnica); // Inicijalizacija atributa objekta, "konstruktor sa parametrima"
	Poklon(const Poklon& p); // Copy construktor 
	virtual ~Poklon();

	virtual void print(ostream& izlaz) const;
	friend ostream& operator<<(ostream& izlaz, const Poklon& p); // Da bi pristupio privatnim atributima klase, kao sto su brojMasnica za kasnije

	virtual int vratiBrojMasnica() const = 0;
};
