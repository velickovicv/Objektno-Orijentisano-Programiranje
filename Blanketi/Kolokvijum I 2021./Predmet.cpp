#include <Predmet.h>

Predmet::Predmet()
{
	masa = 0;
	vrednost = 0;
}
Predmet::Predmet(double m, double v)
{
	masa = m;
	vrednost = v;
}
Predmet::~Predmet()
{
}
void Predmet::vratiVrednost()
{
	return vrednost;
}
void Predmet::vratiMasu()
{
	return masa;
