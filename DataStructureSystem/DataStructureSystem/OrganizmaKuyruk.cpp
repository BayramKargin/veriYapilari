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