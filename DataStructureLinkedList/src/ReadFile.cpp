/**
* @file ReadFiile.hpp
* @description Bu kısımda dosyadan okuma işlemleri gereken kısımları tanımladım.
* @course 2/C
* @assignment 1. Ödev
* @date Kodu 20/11/2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "ReadFile.hpp"
#include "SatirListesi.hpp"
#include <string>
#include <iostream>
using namespace std;

YoneticiListesi liste;

ReadFile::ReadFile() {

}
void ReadFile::DosyaOku()
{
    ifstream dosyaOku;
    string line = "";

    dosyaOku.open("doc\\veriler.txt");
    ReadFile R;
    while (getline(dosyaOku, line))
    {
        R.Parcala(line);

    }
    liste.yaz();
    dosyaOku.close();
}

void ReadFile::Parcala(string line)
{

    int number = 0;
    SatirListesi* satir = new SatirListesi();

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
            satir->add(number);
        }
    }
    liste.add(satir, satir->Ortalama());
}