/**
* @file Sistem.cpp
* @description Sistem sınıfı ve bulunuyor içinde organ nesnesi tutan bir kuyruk bulunuyor
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Sistem.hpp"

Sistem::Sistem(Kuyruk* kuyruk)
{
	this->kuyruk = kuyruk;
}
void Sistem::SistemEkle(Organ* organ)
{
	kuyruk->KuyrukOrganEkle(organ);
}
