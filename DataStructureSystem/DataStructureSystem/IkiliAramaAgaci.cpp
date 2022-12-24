#include "IkiliAramaAgaci.hpp"

#include <iostream>
#include<algorithm>
using namespace std;

IkiliAramaAgaci::IkiliAramaAgaci()
{
	kok = 0;
	elemanSayisi = 20;
	doku = 0;
	i = 0;
	dizi = new int[elemanSayisi];

}
IkiliAramaAgaci::~IkiliAramaAgaci() 
{
	free;
}
void IkiliAramaAgaci::ekle(int veri,DugumAgac* aktifDugum)
{
	if (kok == 0)
	{
		kok = new DugumAgac(veri, doku);
	}
	else if (aktifDugum->veri >= veri)
	{
		if (aktifDugum->sol)
			ekle(veri, aktifDugum->sol);
		else
			aktifDugum->sol = new DugumAgac(veri, doku);
	}
	else if (aktifDugum->veri < veri)
	{
		if (aktifDugum->sag)
			ekle(veri, aktifDugum->sag);
		else
			aktifDugum->sag = new DugumAgac(veri, doku);
	}
	else return;
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

int* IkiliAramaAgaci::PostOrder(DugumAgac* aktfimDugum)
{
	if (aktfimDugum == kok)
	{
		int* dizi1 = new int[elemanSayisi];
		this->dizi = dizi1;
	}
	if (aktfimDugum)
	{
		PostOrder(aktfimDugum->sol);
		PostOrder(aktfimDugum->sag);
		dizi[i] = aktfimDugum->veri;
		i++;
		sil(aktfimDugum);
	}
	return dizi;
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
void IkiliAramaAgaci::sil(DugumAgac* aktfimDugum)
{
		delete aktfimDugum;
}
void IkiliAramaAgaci::Agacsil(IkiliAramaAgaci* aktfimDugum)
{
	delete aktfimDugum;
}