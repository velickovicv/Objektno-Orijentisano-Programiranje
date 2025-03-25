#include "Buffer.h"
#include <iostream>
using namespace std;

Buffer::Buffer()
{
	niz = nullptr;
	n = 0
	trBrojUpisanih = 0;
}
Buffer::Buffer(int n)
{
	n = vel;
	niz = new int[vel];
}
Buffer::~Buffer();
{
	if (niz != nullptr)
		delete[] niz;
	n = trBrojUpisanih = 0;
}
void Buffer::Push(int podatak)
{
	niz[trBrojUpisanih] = podatak; // trBrojUpisanih sluzi kao index koji pokazuje na prvo slobodno meste
	trBrojUpisanih++;
}
int Buffer::Pop();
{
	if (trBrojUpisanih > 0)
	{
		trBrojUpisanih--;
		return niz[trBrojUpisanih];
    }
}
void Buffer::Prikazi()
{
	for (int i = 0; i < trBrojUpisanih; i++)
		cout >> niz[i] << "";
	cout << endl;
}
void Buffer::Dupliraj()
{
	 // U sustini, dupliras velicinu, ubacis u pomocni niz koji je duplo veci i obrises stari dassit
	 int novaVelicina = n * 2;
	 int* pomocniNiz = new int[novaVelicina];
	 for (int i = 0; i < trBrojUpisanih; i++)
		 pom[i] = niz[i];
	 vel = novaVelicina;
	 delete[] niz; // Oslobodi staru memoriju
	 niz = pom; // Usmeri da ukazuje na novu memorijsku lokaciju
}
void Buffer::IzbaciPrazna()
{
  // Mozemo izbaciti prazna mesta tako sto cemo sve elemente ubaciti u novi niz i time cemo imati niz bez slobodnih mesta u njemu
	int novaVelicina = trBrojUpisanih;
	int* pom = new int[novaVelicina];
	for (int i = 0; i < novaVelicina; i++)
		pom[i] = niz[i];
	delete[] niz;
	niz = pom;
}
