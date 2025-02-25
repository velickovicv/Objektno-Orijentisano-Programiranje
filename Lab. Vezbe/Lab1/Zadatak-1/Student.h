#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
	char* ime;
	char* prezime;
	int brojIndexa;
	int maxBrojIspita;
	int brojPolozenihIspita;
	int* ocene;

public:
	Student();
	Student(char* ime, char* prezime, int brojIndexa, int maxBrojIspita
	~Student();
	inline void info(int* index, int* ispiti)
	{
		*index = this->brojIndexa;
		*ispiti = this->brojPolozenihIspita;
	}
	void dodajOcenu();
	void input();
	void prikaziOcena();
	void output();
	void azuriraj();

};
