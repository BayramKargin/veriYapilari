#include "ReadFile.hpp"
#include "Kuyruk.hpp"
#include "Radix.hpp"
#include "IkiliAramaAgaci.hpp"
#include "Hucre.hpp"
#include "Sistem.hpp"
#include "Organ.hpp"
#include "Organizma.hpp"
#include "Kontrol.hpp"
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
            kuyruk->ekle(number);
        }
    }
    Radix* radix = new Radix(kuyruk, adet);
    Kuyruk* yeni =radix->Sirala();
    Dugum* gec = yeni->ilk;

    while (gec != 0)
    {
        Hucre* yeniHucre = new Hucre(gec->veri);
        doku->KuyrukEkle(yeniHucre->veri);
        gec = gec->sonraki;
    }
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
    IkiliAramaAgaci* agac = new IkiliAramaAgaci();
    Organ* organ = new Organ(agac);
    Organizma* organizma = new Organizma();
    while (getline(dosyaOku, line))
    {
        satir++;
        if ((satir) % 20 == 0 )
        {
            Doku* doku = Parcala(line);
            organ->OrganEkle(doku);
            sistem->SistemEkle(organ);
            //organ->agac->PostOrder(agac->kok);
            agac = new IkiliAramaAgaci();
            organ = new Organ(agac);
            organSayisi++;
            if ((organSayisi % 100 == 0) && (organSayisi != 0))
            {
                organizma->OrganizmaSistemEkle(sistem);
                kuyruk = new Kuyruk();
                sistem = new Sistem(kuyruk);
            }
        }
        else
        {
            Doku* doku = Parcala(line);
            organ->OrganEkle(doku);
        }
    }
    DugumOrganizma* organizmailk = organizma->kuyruk->ilk;
    DugumOrganizma* gecOrganizma = organizmailk;
    SistemDugum* sistemilk = organizma->kuyruk->ilk->sistem->kuyruk->sistemilk;
    SistemDugum* gecSistem = sistemilk;
    while (gecOrganizma != 0)
    {
        gecSistem = gecOrganizma->sistem->kuyruk->sistemilk;
        while (gecSistem !=0)
        {
            if ((gecSistem->organ->agac->Denge()) > 1 || (gecSistem->organ->agac->Denge()) < -1)
                cout << "#";
            else
                cout << " ";
       
            gecSistem = gecSistem->sistemsonraki;
        }
        cout << endl;
        gecOrganizma = gecOrganizma->organizmaSonraki;
    }
    Kontrol* kontrol = new Kontrol(organizma);
    kontrol->KontrolEt();

    dosyaOku.close();
}
