/**
* @file Hücre.cpp
* @description Hücre sınıfı
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Hucre.hpp"

Hucre::Hucre(int veri)
{
	this->veri = veri;
	onceki = 0;
	sonraki = 0;
}