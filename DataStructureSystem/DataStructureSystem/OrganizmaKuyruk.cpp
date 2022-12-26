/**
* @file OrganizmaKuyruk.cpp
* @description Organizma için kuyruk sınıfı içinde sistem nesnesi tutuyor
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "OrganizmaKuyruk.hpp"

OrgnizmaKuyruk::OrgnizmaKuyruk()
{
	ilk = 0;
	son = 0;
	elemanSayisi = 0;
}
OrgnizmaKuyruk::~OrgnizmaKuyruk()
{

}
void OrgnizmaKuyruk::OrganizmaSistemEkle(Sistem* sistem)
{
    if (ilk == 0)
    {
        ilk = new DugumOrganizma(sistem);
        son = ilk;
    }
    else
    {
        DugumOrganizma* yeni = new DugumOrganizma(sistem);
        son->organizmaSonraki = yeni;
        son = yeni;
    }
    elemanSayisi++;
}