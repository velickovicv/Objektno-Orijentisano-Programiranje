#pragma once
#include <ostream>


class Step
{

private:

	char* naziv;
	char* tip;

public:

	Step();

	// Const ispred parametra sprecava modifikaciju i stiti enkapsulaciju !!

	Step(const char* nnaziv, const char* ttip);
	virtual ~Step();                            // Virtuelni destruktor kada se iz klase izvodi druga klasa !!
	Step(const Step& s);   // Copy construktor

    // Constanta ispred { return naziv: } oznacava da funkcija ne menja objekat 

	const char* vratiNaziv() const { return naziv; }  // Gubi se enkapsulacija, pointer postaje javna funkcija i moze se pristupiti privatnom atributu klase !!
	const char* vratiTip() const { return tip; }
	virtual int GetSpecAttribute() = 0;         // Kada je naglaseno u zadatku "Cistu virtuelna f-ja" to je onda APSTRAKTNA F-JA !!
	virtual void prikazi(ostream& izlaz) const;
};
