#include "Organ.hpp"

Organ::Organ(IkiliAramaAgaci* agac)
{
	this->agac = agac;
	doku = 0;
}
void Organ::OrganEkle(Doku* doku)
{
	this->doku = doku;
	agac->ekle(doku,agac->kok);
}