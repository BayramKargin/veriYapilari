#include "Organ.hpp"

Organ::Organ(İkiliAramaAgaci* agac)
{
	this->agac = agac;
}
void Organ::OrganEkle(Doku* doku)
{
	agac->ekle(doku->OrtancaGetir(doku),agac->kok);
}