#include "PrivateProcess.h"
#include <iostream>
#include <string.h>
using namespace std;

PrivateProcess::PrivateProcess()
	:Process() {

	code = nullptr;
	tip = 1;

}
PrivateProcess::PrivateProcess(char* ccode, int ssifra)
	:Procces(ssifra, 1) {

	code = new char[strlen(ccode) + 1];
	strcpy(code, ccode);
}
PrivateProcess::~PrivateProcess()
{
	if (code != nullptr)
		delete[] code;
}
void PrivateProcess::Start(char* ccode)
{
	if (!strcmp(ccode, code))
		stanje = 1;
}
void PrivateProcess::Stop()
{
	if (stanje == 1) {
		stanje = 2;
	}
}
void PrivateProcess::prikazi()
{
	cout << "PRIVATE - " << code << ": ";
	Process::prikazi();
}

