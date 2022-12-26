/**
* @file Kuyruk.cpp
* @description Kuyruk sınıfı
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Kuyruk.hpp"

Kuyruk::Kuyruk(){
	ilk = 0;
	son = 0;
    sistemilk = 0;
    sistemson = 0;
    sistemelemanSayisi = 0;
    elemanSayisi = 0;
    /*organizmailk = 0;
    organizmason = 0;
    organizmaElemanSayisi = 0;*/
}
Kuyruk::~Kuyruk() {

    while (ilk != 0)
    {
        Dugum* gec = ilk;
        ilk = ilk->sonraki;
        delete gec;
    }
}
bool Kuyruk::bosmu()
{
    if (ilk == 0)
        return true;
    return false;
}
void Kuyruk::ekle(int veri)
{
    if (ilk == 0)
    {
        ilk = new Dugum(veri);
        son = ilk;
    }
    else
    {
        Dugum* yeni = new Dugum(veri);
        son->sonraki = yeni;
        son = yeni;
    }
    elemanSayisi++;
}
void Kuyruk::KuyrukOrganEkle(Organ* organ)
{
    if (sistemilk == 0)
    {
        sistemilk = new SistemDugum(organ);
        sistemson = sistemilk;
    }
    else
    {
        SistemDugum* yeni = new SistemDugum(organ);
        sistemson->sistemsonraki = yeni;
        sistemson = yeni;
    }
    sistemelemanSayisi++;
}
/*void Kuyruk::KuyrukSistemEkle(Sistem* sistem)
{
    if (organizmailk == 0)
    {
        organizmason = new DugumOrganizma(sistem);
        organizmason = organizmailk;
    }
    else
    {
        DugumOrganizma* yeni = new DugumOrganizma(sistem);
        organizmason->organizmaSonraki = yeni;
        organizmason = yeni;
    }
    organizmaElemanSayisi++;
}*/
void Kuyruk::cikar()
{
    if (ilk != 0)
    {
        Dugum* gec = ilk->sonraki;
        delete ilk;
        ilk = gec;
        if (ilk == 0)
        {
            son = 0;
        }
        elemanSayisi--;
    }
}
int Kuyruk::getir()
{
    if (ilk != 0)
        return ilk->veri;
}

int Kuyruk::elemanSayisiGetir()
{
    return elemanSayisi;
}