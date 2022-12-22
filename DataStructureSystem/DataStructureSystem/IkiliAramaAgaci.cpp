#include "IkiliAramaAgaci.hpp"
#include <iostream>
#include<algorithm>
using namespace std;

IkiliAramaAgaci::IkiliAramaAgaci()
{
	kok = 0;
	elemanSayisi = 0;
	doku = 0;
}
IkiliAramaAgaci::~IkiliAramaAgaci() 
{

}
void IkiliAramaAgaci::ekle(int veri)
{
	//ekle(veri,kok);
}
void IkiliAramaAgaci::ekle(Doku* doku, DugumAgac* aktifDugum)
{
	if (kok == 0)
	{
		kok = new DugumAgac(doku->OrtancaGetir(doku), doku);
	}
	else if (aktifDugum->veri >= doku->OrtancaGetir(doku))
	{
		if (aktifDugum->sol)
			ekle(doku, aktifDugum->sol);
		else
			aktifDugum->sol = new DugumAgac(doku->OrtancaGetir(doku),doku);
	}
	else if (aktifDugum->veri < doku->OrtancaGetir(doku))
	{
		if (aktifDugum->sag)
			ekle(doku, aktifDugum->sag);
		else
			aktifDugum->sag = new DugumAgac(doku->OrtancaGetir(doku),doku);
	}
	else return;
	elemanSayisi++;
}
int IkiliAramaAgaci::yukseklik(DugumAgac* aktifDugum)
{
	if (aktifDugum)
	{
		return 1 + max(yukseklik(aktifDugum->sol),
			yukseklik(aktifDugum->sag));
	}
	return -1;
	
}
void IkiliAramaAgaci::PostOrder(DugumAgac* aktfimDugum)
{

	if (aktfimDugum == 0)
		return;

	PostOrder(aktfimDugum->sol);

	PostOrder(aktfimDugum->sag);



}
int IkiliAramaAgaci::elemanSayisigetir()
{
	return elemanSayisi;
}
void IkiliAramaAgaci::Dolas(DugumAgac* aktfifDugum)
{
	if (aktfifDugum == NULL)
		return;
	Hucre* gecHucre= aktfifDugum->doku->ilk;
	while (gecHucre != 0)
	{
		if ((gecHucre->veri) % 2 == 0)
		{
			gecHucre->veri = ((gecHucre->veri) / 2);
		}
		gecHucre = gecHucre->sonraki;
	}
	Dolas(aktfifDugum->sag);
	Dolas(aktfifDugum->sol);
	int* dizi = new int [elemanSayisi];
}
int IkiliAramaAgaci::Denge()
{
	 return Dengesizlik(kok);
}
int IkiliAramaAgaci::Dengesizlik(DugumAgac* aktifDugum)
{
	if (kok == 0)
		return 0;
	return yukseklik(aktifDugum->sol) - yukseklik(aktifDugum->sag);	
}
void IkiliAramaAgaci::sil(int veri)
{

}