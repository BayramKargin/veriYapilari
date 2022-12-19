#include "ReadFile.hpp"
#include "Kuyruk.hpp"
#include "Radix.hpp"
#include "İkiliAramaAgaci.hpp"
#include "Hucre.hpp"
#include "Doku.hpp"
#include "Organ.hpp"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

ReadFile::ReadFile()
{

}
void ReadFile::Parcala(string line) 
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
}
void ReadFile::Read()
{
    ifstream dosyaOku;
    dosyaOku.open("Veri.txt");
    string line;
    int satir = 0;
    while (getline(dosyaOku, line))
    {
        Parcala(line); 

    }

    dosyaOku.close();
}
