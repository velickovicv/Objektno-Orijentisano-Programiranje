#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Ispit
{

private:

	char* naziv;
	int ocena;
	int espb;
	void zauzmiMemoriju(const char* naziv, int ocena, int espb);

public:

	Ispit();
	Ispit(const char* _naziv, int _ocena, int _espb);
	~Ispit();

	Ispit(Ispit& i); // Copy construktor
	friend ostream& operator<<(ostream& izlaz, Ispit& i);
	friend istream& operator>>(istream& ulaz, Ispit& i);

	float operator+(float leviOp);
	Ispit& operator=(const Ispit& i);
	bool operator>(Ispit& s);

};
