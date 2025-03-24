#include <iostream>
#include <string.h>
#pragma once

using namespace std;

class Student
{
private:

	char* prezime;
	char* ime;
	int brIndexa;
	int maxBrIspita;
	int brPolozenih;
	int* ocene;

public:

	Student();
	Student(char* prezime, char* ime, int brIndexa, int maxBrIspita, int brPolozenih);
	~Student();

	inline int getbrIndexa() const { return brIndexa; }
	inline int getbrPolozenih() const { return brPolozenih; }

	int dodajOcenu(int ocena);
	void ucitaj();
	int prikaziOcene();
	void output();
	void azuriraj(const char* novoIme, const char* novoPrezime);
};  


