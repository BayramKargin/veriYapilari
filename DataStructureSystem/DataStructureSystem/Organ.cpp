#include "Organ.hpp"

Organ::Organ()
{
	agac = 0;
}
void Organ::OrganEkle(Doku* doku)
{
	agac->ekle(doku->OrtancaGetir(doku));
}