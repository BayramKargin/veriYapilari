/**
* @file DugumOrganizma.cpp
* @description Düğüm sınıfı Organiza sınıfı için
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "DugumOrganizma.hpp"

DugumOrganizma::DugumOrganizma(Sistem* sistem)
{
	this->sistem = sistem;
	organizmaSonraki = 0;
}
DugumOrganizma::~DugumOrganizma()
{

}