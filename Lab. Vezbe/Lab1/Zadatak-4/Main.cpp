#include "Buffer.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Upisite n: ";
	int n;
	cin >> n;

	Buffer b1(n);
	for (int i = 1; i <= n; i++)
		b1.push(i);

	Buffer* b2 = new Buffer(b1);

	cout << "m: ";
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
		b1.pop();

	delete b2;
	return 0;
}
