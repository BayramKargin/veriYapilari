/**
* @file Test.cpp
* @description Ekrana yazdırma kısmı tesleri yapan fonksiyonlar
* @course Dersi 2/C
* @assignment Ödev - 2
* @date Kodu 24.12.2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Test.hpp"
#include <iostream>
using namespace std;

Test::Test()
{
}

Test::~Test()
{
}
void Test::TestEt(Organizma* organizma)
{
    DugumOrganizma* organizmailk = organizma->kuyruk->ilk;
    DugumOrganizma* gecOrganizma = organizmailk;
    SistemDugum* sistemilk = organizma->kuyruk->ilk->sistem->kuyruk->sistemilk;
    SistemDugum* gecSistem = sistemilk;

    while (gecOrganizma != 0)
    {
        gecSistem = gecOrganizma->sistem->kuyruk->sistemilk;
        while (gecSistem != 0)
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
}