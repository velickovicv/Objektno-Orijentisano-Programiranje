#include "IspitniMaterijali.h"

IspitniMaterijali::IspitniMaterijali()
{
	oznaka = 0;
	tezina = 0;

	// Stavili smo status savladan u FALSE, jer se u zadatku pita da se odradi *nesto, samo ako materijali nisu savladani
	// Isto se trazi da se status promeni u savladano, tako da je za default konstruktor najbolje da stavimo status na False

	status = false;

}
IspitniMaterijali::IspitniMaterijali(int _oznaka, float _tezina, bool _status)
{
	oznaka = _oznaka;
	tezina = _tezina;
	status = _status;
}

// Copy construktor 

IspitniMaterijali::IspitniMaterijali(const IspitniMaterijali& im)
{
	oznaka = im.oznaka;
	tezina = im.tezina;
	status = im.status;
}
IspitniMaterijali::~IspitniMaterijali()
{
}
int IspitniMaterijali::vratiOznaku()
{
	return oznaka;
}
bool IspitniMaterijali::jeSavladan()
{
	return status;
}
void IspitniMaterijali::savladaj()
{
	status = true;
}
friend ostream& operator<<(ostream& izlaz, IspitniMaterijali& im)
{
	im.stampaj(izlaz);
	return izlaz;
}
