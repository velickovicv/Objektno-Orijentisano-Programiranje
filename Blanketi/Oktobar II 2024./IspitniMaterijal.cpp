#include "IspitniMaterijal.h"

IspitniMaterijal::IspitniMaterijal()
{
	oznaka = 0;
	tezina = 0.0;
	status = false;

}
IspitniMaterijal::IspitniMaterijal()
{
	this->oznaka = oznaka;
	this->tezina = tezina;
	this->status = 0;
}
IspitniMaterijal::IspitniMaterijal(const IspitniMaterijal& im)
{
	oznaka = im.oznaka;
	tezina = im.tezina;
	status = im.status;
}
IspitniMaterijal::~IspitniMaterijal()
{

}
int IspitniMaterijal::vratiOznaku()
{
	return oznaka;
}
bool IspitniMaterijal::jeSavladan()
{
	return status;
}
void IspitniMaterijal::savladaj()
{
	status = true;
}
friend ostream& operator<<(ostream& izlaz, IspitniMaterijal& im)
{
	im.prikazi(izlaz);
	return izlaz;
}
