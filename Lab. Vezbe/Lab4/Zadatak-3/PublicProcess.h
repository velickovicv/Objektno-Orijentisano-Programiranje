#pragma once
#include "Process.h"
class PublicProcess : public Process
{
private:

	char* creatorName;

public:

	PublicProcess();
	PublicProcess(int ssifra, char* ccreatorName);
	virtual ~PublicProcess();
	virtual void ispisi();
	virtual void Start(char* userName);
	virtual void Stop();
};
