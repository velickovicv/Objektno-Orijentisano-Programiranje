#pragma once
#include "Process.h"

class PrivateProcess : public Process
{
private:

	char* code;

public:

	PrivateProcess();
	PrivateProcess(char* ccode, int ssifra);
	virtual ~PrivateProcess();
	virtual void Start(char* ccode);
	virtual void Stop();
	virtual void prikazi();
};
