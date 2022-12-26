/**
* @file SistemDugum.cpp
* @description Sistem sınıfı için düğüm sınıfı
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "SistemDugum.hpp"

SistemDugum::SistemDugum(Organ* organ)
{
	this->organ = organ;
	sistemsonraki = 0;
}

SistemDugum::~SistemDugum()
{
}