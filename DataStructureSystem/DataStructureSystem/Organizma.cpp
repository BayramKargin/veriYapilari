/**
* @file Organizma.cpp
* @description Organizma sınıfı bulunuyor sistemlerin sakladığın bir kuyruk bulunuyor içinde
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Organizma.hpp"

Organizma::Organizma()
{
	kuyruk = new OrgnizmaKuyruk();
	sistemSayisi = 0;
}
Organizma::~Organizma()
{

}
void Organizma::OrganizmaSistemEkle(Sistem* sistem)
{
	kuyruk->OrganizmaSistemEkle(sistem);
	sistemSayisi++;
}