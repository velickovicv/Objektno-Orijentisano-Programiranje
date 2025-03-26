#include "Buffer.h"
#include <iostream>
#include <iomanip>
using namespace std;

Buffer::Buffer();
{    
	n = 0;
	brEl = 0;
	niz = nullptr;
}
Buffer::Buffer(int k)
{   
	this->brEl = 0;
	this->n = k;
	this->niz = new int[k];
}
Buffer::~Buffer()
{
	if (niz != nullptr)
		delete[] niz;
}
Buffer::push(int k)
{
	if (brEl < n)
	{
		niz[brEl] = k;
		brEl++;
    }
}
void Buffer::pop()
{

	if (brEl > 0) {

		for (int i = 0; i < brEl - 1; ++i) {
			niz[i] = niz[i + 1];

		}
		brEl--;
	}
}
void Buffer::Clear()
{
	brEl = 0;    // Nisam siguran da li ce ovo raditi
}
void Buffer::stampaj()
{
	for (int i = 0; i < brEl; ++i) {
		cout << niz[i] << " ";
	}
}
