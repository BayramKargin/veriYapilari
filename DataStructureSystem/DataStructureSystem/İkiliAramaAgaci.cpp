#include "İkiliAramaAgaci.hpp"

İkiliAramaAgaci::İkiliAramaAgaci()
{
	kok = 0;
}
İkiliAramaAgaci::~İkiliAramaAgaci() 
{

}
void İkiliAramaAgaci::ekle(int veri)
{
	ekle(veri,kok);
}
void İkiliAramaAgaci::ekle(int veri, DugumAgac* aktifDugum)
{
	if (kok == 0)
	{
		kok = new DugumAgac(veri);
	}
	else if (aktifDugum->veri >= veri)
	{
		if (aktifDugum->sol)
			ekle(veri, aktifDugum->sol);
		else
			aktifDugum->sol = new DugumAgac(veri);
	}
	else if (aktifDugum->veri < veri)
	{
		if (aktifDugum->sag)
			ekle(veri, aktifDugum->sag);
		else
			aktifDugum->sag = new DugumAgac(veri);
	}
	else return;
}
void İkiliAramaAgaci::sil(int veri)
{

}