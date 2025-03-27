#include "PrecessQueue.h"
#include <iostream>
#include <string.h>
using namespace std;

ProcessQueue::ProcesQueue()
{
	maxEl = 0;
	brTrAkt = 0;
	brTrCek = 0;

	nizAktivni = nullptr;
	nizCekanje = nullptr;
}
ProcessQueue::ProcesQueue(int mmaxEl)
{
	maxEl = mmaxEl;

	brTrAkt = 0;
	brTrCek = 0;

	nizAktivni = new Process * [maxEl];
	for (int i = 0; i < maxEl; ++i)
		nizAktivni[i] = nullptr;

	nizCekanje = new Process * [maxEl];
	for (int i = 0; i < maxEl; ++i)
		nizCekanje[i] = nullptr;
}
ProcessQueue::~ProcessQueue()
{
	for (int i = 0; i < maxEl; ++i) {
		
		if (nizAktivni[i] != 0)
			delete nizAktivni[i];

		if (nizCekanje[i] != 0)
			delete nizCekanje[i];
	}
	delete[] nizAktivni;
	delete[] nizCekanje;
}
void ProcessQueue::dodajProces(process* p, int ako)
{
	if (ako == 1)
	{
		if (maxEl != brTrCek)
			nizCekanje[brTrCek++] = p;
	}
	else if (ako == 0)
	{
		if (maxEl != brTrAkt)
			nizAktivan[maxEl] = p;
	}
}
void ProcessQueue::izbaci()
{
	for (int i = 0; i < trBrAkt: ++i) {
		if (nizAktivnih[i]->vratiStanje() == 2) {
			delete nizAktivni[i];
		}
		for (int j = i; j < trBrAkti; ++j) {
			nizAktivni[j] = nizAktivni[j + 1];
		}
		brTrAkt--;
		i--;
	}
}
void ProcessQueue::startuj(char* username, char* code)
{
	for (int i = 0; i < trBrAkt; ++i) {
		if (nizAktivni->vratiStanje() == 0) {

			if (nizAktivni[i]->vratiTip == 0) {
				nizAktivni[i]->start(username);
			}
			else
			{
				nizAktivni[i]->start(code);
			}
		}

	}
	for (int i = 0; i < brTrCek; i++)
	{
		if (nizCekanje[i]->vratiStanje() == 0)
		{
			if (nizCekanje[i]->vratiTip() == 0)
				nizCekanje[i]->start(username);
			else
				nizCekanje[i]->start(code);
		}
	}
}
void ProcessQueue::Stop()
{
	for (int i = 0; i < trBrAkt; ++i) {
		if (nizAktivni[i]->vratiStanje() == 1)
			nizAktivan[i]->Stop();

		if (nizCekanje[i]->vratiStanje() == 1)
			nizCekanje[i]->Stop();
	}
}
ProcessQueue::prikazi()
{
	cout << maxEl;
	cout << "Niz aktivnih. Trenutni broj aktivnih: " << trBrAkt << endl;
	for (int i = 0; i < trBrAkt; ++i)
		nizAktivnih[i]->prikazi();

	cout << "Niz na cekanju. Trenutan broj na cekanju: " << trBrCek << endl;
	for (int i = 0; i < trBrCek; ++i) {
		nizCekanje[i]->prikazi();
	}
}
