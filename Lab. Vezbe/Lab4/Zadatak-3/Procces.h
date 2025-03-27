#pragma once

class Process
{
private:

	int sifra;
	int stanje;
	int tip;

public:

	Process();
	Process(int ssifra, int ttip);
	virtual ~Process();
	inline int vratiSifru() { return sifra; } // Kada se u zadatku trazi f-ja koja vraca nesto, to je inline f-ja !!
	inline int vratiStanje() { return stanje; }
	virtual void prikazi();
	virtual void Start(char* parametar) = 0;  // Kada u zadatku pise cista virtuelna funkcija onda je  = 0; !!
	virtual void Stop() = 0;
};
