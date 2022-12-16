#include "Doku.hpp"

Doku::Doku(Hucre veri) {
    ilk = 0;
    elemanSayisi = 0;
}
void Doku::DokuEkle(Hucre veri)
{
    Hucre* newNode = new Hucre(veri);
    if (ilk == 0) {
        ilk = newNode;
    }
    else
    {
        Hucre* temp = ilk;
        while (temp->sonraki != 0)
        {
            temp = temp->sonraki;
        }
        temp->sonraki = newNode;
        newNode->onceki = temp;
    }
    elemanSayisi++;
}