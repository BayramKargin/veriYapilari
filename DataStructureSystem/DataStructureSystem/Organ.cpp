#include "Organ.hpp"

Organ::Organ()
{
	agac = 0;
	satir = 20;
}
void Organ::OrganDokuEkle(Doku* doku)
{
	agac->ekle(doku->OrtancaGetir(doku));
}