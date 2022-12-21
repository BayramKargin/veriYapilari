#include "ReadFile.hpp"
#include "Kuyruk.hpp"
#include "Radix.hpp"
#include "İkiliAramaAgaci.hpp"
#include "Hucre.hpp"
#include "Sistem.hpp"
#include "Organ.hpp"
#include "Organizma.hpp"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

ReadFile::ReadFile()
{

}
Doku* ReadFile::Parcala(string line) 
{
    int number = 0;
    int j = 0;
    int adet = 1;
    int ortanca = 0;
    int satir = 0;
    Kuyruk* kuyruk = new Kuyruk();
    Doku* doku = new Doku();

    for (int i = 0; i < line.length(); i++)
    {
        string stringNumber = "";
        if (line[i] != ' ')
        {
            while (line[i] != ' ' && i < line.length())
            {
                stringNumber = stringNumber + line[i];
                i++;
            }
            number = stoi(stringNumber);
            cout << number << endl;
            kuyruk->ekle(number);
            //sayilar[j] = number;
            //j++;
        }
    }
    Radix* radix = new Radix(kuyruk, adet);
    cout << "--------------------------------" << endl;
    Kuyruk* yeni =radix->Sirala();
    Dugum* gec = yeni->ilk;

    while (gec != 0)
    {
        Hucre* yeniHucre = new Hucre(gec->veri);
        doku->KuyrukEkle(yeniHucre->veri);
        gec = gec->sonraki;
    }
   // doku->OrganYap(doku,satir);
    satir++;
    return doku;
}
void ReadFile::Read()
{
    ifstream dosyaOku;
    dosyaOku.open("Veri.txt");
    string line;
    int satir = 0;
    int organSayisi = 0;
    Kuyruk* kuyruk = new Kuyruk();
    Sistem* sistem = new Sistem(kuyruk);
    İkiliAramaAgaci* agac = new İkiliAramaAgaci();
    Organ* organ = new Organ(agac);
    Organizma* organizma = new Organizma();
    while (getline(dosyaOku, line))
    {
        if ((satir) % 20 == 0 && satir != 0)
        {
            sistem->SistemEkle(organ);
            agac = new İkiliAramaAgaci();
            organ = new Organ(agac);
            organSayisi++;
            if ((organSayisi % 100 == 0) && (organSayisi != 0))
            {
                organizma->OrganizmaSistemEkle(sistem);
                kuyruk = new Kuyruk();
                sistem = new Sistem(kuyruk);
            }
        }
        Doku* doku = Parcala(line);
        organ->OrganEkle(doku);
        satir++;
    }
    dosyaOku.close();
}
