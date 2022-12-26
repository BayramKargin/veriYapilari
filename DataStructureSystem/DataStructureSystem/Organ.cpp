/**
* @file Organ.cpp
* @description Organ sınıfı içerisinde ağaç bulunuyor
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
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