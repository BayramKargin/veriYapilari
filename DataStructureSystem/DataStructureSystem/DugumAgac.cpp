/**
* @file DugumAgac.cpp
* @description İkili Arama Ağacı için düğüm sınıfı
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "DugumAgac.hpp"

DugumAgac::DugumAgac(int veri,Doku* doku)
{
	this->doku = doku;
	this->veri = veri;
	sol = 0;
	sag = 0;
}