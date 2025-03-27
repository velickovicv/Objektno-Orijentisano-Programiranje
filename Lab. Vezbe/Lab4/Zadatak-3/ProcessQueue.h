#pragma once
#include "Process.h"

class ProcessQueue
{
private:

	int maxEl;
	int brTrAkt;
	int brTrCek;

	Process** nizAktivni;
	Process** nizCekanje;

public:

	ProcessQueue();
	ProcessQueue(int mmaxEl);
	~ProcessQueue();
	void dodajProces(Process* p, int ako);
	void izbaci();
	void Start(char* username, char* code);
	void stop();
	void prikazi();
};
