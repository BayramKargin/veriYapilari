/**
* @file Radix.cpp
* @description Radix sort sıralama için gerekli fonksiyonlar
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Radix.hpp"
#include <iostream>
#include<iomanip>
using namespace std;
Radix::Radix(Kuyruk* kuyruk, int adet)
{
    this->sayiAdedi = adet;
    this->kuyruk = kuyruk;
   // this->sayilar = new int[sayiAdedi];

   // for (int i = 0; i < sayiAdedi; i++)
       // this->sayilar[i] = sayilar[i];

    kuyruklar = new Kuyruk * [10];
    for (int i = 0; i < 10; i++)
        kuyruklar[i] = new Kuyruk();
}
Radix::~Radix()
{
    delete[] sayilar;
    for (int i = 0; i < 10; i++)
        delete kuyruklar[i];

    delete[] kuyruklar;
}
Kuyruk* Radix::Sirala()
{
        Dugum* gec = kuyruk->ilk;
        while (gec != 0)
        {
            int sonBasamak = gec->veri % 10;
            kuyruklar[sonBasamak]->ekle(gec->veri);
            gec = gec->sonraki;
        }
    
    int maxBasamakSayisi = maxBasamakSayisiGetir();


    int basamakCarpani = 10;

    for (int i = 1; i < maxBasamakSayisi; i++)
    {
        int uzunluklar[10];

        kuyrukUzunluklariGetir(uzunluklar);

        for (int j = 0; j < 10; j++)
        {
            int es = uzunluklar[j];

            while (es)
            {
                int siradakiSayi = kuyruklar[j]->getir();

                kuyruklar[j]->cikar();
                int basamak = (siradakiSayi / basamakCarpani) % 10;
                kuyruklar[basamak]->ekle(siradakiSayi);
                es--;
            }
        }
        basamakCarpani *= 10;
    }
    Kuyruk* yeniKuyruk =new Kuyruk();
    for (int i = 0; i < 10; i++)
    {
        while (!kuyruklar[i]->bosmu())
        {
            yeniKuyruk->ekle(kuyruklar[i]->getir());
            kuyruklar[i]->cikar(); 
        }
    }
    kuyruk->~Kuyruk();
    return yeniKuyruk;
}
int Radix::maxBasamakSayisiGetir()
{
    Dugum* gec = kuyruk->ilk;
    int maxBasamakSayisi = basamakSayisiGetir(gec->veri);

        while (gec != 0)
        {
            int siradakiBasamakSayisi = basamakSayisiGetir(gec->veri);
            if (maxBasamakSayisi < siradakiBasamakSayisi)
                maxBasamakSayisi = siradakiBasamakSayisi;
            gec = gec->sonraki;
        }
    return maxBasamakSayisi;
}
int Radix::basamakSayisiGetir(int sayi)
{
    int basamakSayisi = 0;
    while (sayi)
    {
        sayi = sayi / 10;
        basamakSayisi++;
    }
    return basamakSayisi;

}
void Radix::kuyruklariYazdir()
{
    /*for (int i = 0; i < 10; i++)
    {
        cout << setw(5) << std::left << i << ":" << *kuyruklar[i];
    }
    cout << "------------------------" << endl;*/
}

void Radix::kuyrukUzunluklariGetir(int* uzunluklar)
{
    for (int i = 0; i < 10; i++)
    {
        uzunluklar[i] = kuyruklar[i]->elemanSayisiGetir();
    }
}