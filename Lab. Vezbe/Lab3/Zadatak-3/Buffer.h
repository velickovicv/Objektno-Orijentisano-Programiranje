#pragma once

class Buffer
{
private:

	int* niz; // Sam buffer
	int n;  // Kapacitet Buffera
	int brEl;

public:

	Buffer();
	Buffer(int nn);
	~Buffer();
	virtual void push(int nn);
	virtual void pop();
	virtual void clear();
	void stampaj();

};
