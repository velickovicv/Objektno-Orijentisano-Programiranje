#include Skup.h
#include <math.h>

Skup::Skup()
{
	n = 0;
	niz = nullptr;
}
Skup::Skup(int n)
{
	this->n = n;
	niz = new int[this->n];
}
Skup::~Skup()
{
	if (niz != nullptr)
		delete[] niz;

	n = 0;
}
inline int Skup::brojElemenata() const {
	return n;
}
// Fali ovde da se nadju duplikat

int Skup::ispitaj(int element)
{
	for (int i = 0; i < n; i++)
		if (niz[i] == element)
			return 1;
	return 0;
}
void Skup::Input()
{
	for (int i = 0; i < n; i++)
		cin >> niz[i]
}
void Skup::nerastuci()
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (niz[i] < niz[j])
				swap(niz[i], niz[j]);
}
void Skup::output()
{
	for (int i = 0; i < n; i++)
		cout << niz[i] << " ";
}
