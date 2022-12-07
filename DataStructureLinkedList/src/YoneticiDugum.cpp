/**
* @file YoneticiDugum.hpp
* @description Bu kısımda YoneticiListesi sınıfı için bir düğüm sınıfı tasarladım.
* @course 2/C
* @assignment 1. Ödev
* @date Kodu 20/11/2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "YoneticiDugum.hpp"

YoneticiDugum::YoneticiDugum(SatirListesi* satir, double ortalama)
{
	this->satir = satir;
	this->ortalama = ortalama;
	before = next = 0;
}