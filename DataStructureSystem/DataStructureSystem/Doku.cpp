#include "Doku.hpp"


Doku::Doku() {
    ilk = 0;
    son = 0;
    elemanSayisi = 0;
}
void Doku::DokuEkle(Hucre veri)
{
    Hucre* newNode = new Hucre(elemanSayisi);
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
void Doku::KuyrukEkle(int veri)
{
    if (ilk == 0)
    {
        ilk = new Hucre(veri);
        son = ilk;
    }
    else
    {
        Hucre* yeni = new Hucre(veri);
        son->sonraki = yeni;
        son = yeni;
    }
    elemanSayisi++;
}
int Doku::OrtancaGetir(Doku* doku)
{
    int ortanca = 0;
    Hucre* gec = doku->ilk;
    for (int i = 0; i < ((doku->elemanSayisi)/2); i++)
    {
        gec = gec->sonraki;
    }

    return gec->veri;
}
/*void Doku::OrganYap(Doku* doku, int satir)
{
    if ((satir+1)%20 == 0)
    {
        Organ* organ = new Organ();
    }
    organ1->OrganAgacEkle(doku);
}*/