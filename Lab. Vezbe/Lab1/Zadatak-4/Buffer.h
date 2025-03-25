#include <iostream>
#pragma once
using namespace std;

class Buffer
{
private:

	int* niz;
	int n;
	int trBrojUpisanih;

public:

	Buffer();
	Buffer(int n);
	~Buffer();
	inline int vrati() const { return trbrojupisanih; }
	int push(int podatak); 
	int pop();
	void output();
	void dupliraj();
	void izbaciPrazna();

};
