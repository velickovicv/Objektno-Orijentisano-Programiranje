#include "Buffer.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Upisite n: ";
	int n;
	cin >> n;

	Buffer b1(n);
	for (int i = 1; i <= n; ++i)
		b1.push(i);

	Buffer* b2 = new Buffer(b1);

	cout << "Unesite m: ";
	int m;
	cin >> m;

	for (int i = 0; i < m; ++i)
		b1.pop();
    
	cout << "br el u b1: " << b1.vratiBrEl(); << endl;  // Pristup je sa ( . ) jer se radi o statickoj memoriji !!
	cout << "br el u b2: " << b2->vratiBrEl();  // Pristup je sa this -> jer se radi o dinamickoj memoriji !!

	delete b2; // Oslobadjamo se dinamicke memorije
	return 0;
}
