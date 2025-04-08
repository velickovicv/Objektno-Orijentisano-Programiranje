#pragma once
#include <iostream>

using namespace std;

class IspitniMaterijal
{

private:

	int oznaka;
	float tezina;
	bool status;

public:

	IspitniMaterijal();
	IspitniMaterijal(int oznaka, float tezina);
	IspitniMaterijal(const IspitniMaterijal& im);
	virtual ~IspitniMaterijal();

	int vratiOznaku();
	bool jeSavladan();
	void savladaj();

	virtual float vratiVreme(int vreme) = 0;

	virtual void prikazi(ostream& izlaz) = 0;
	friend ostream& operator<<(ostream& izlaz, IspitniMaterijal& im);
};
