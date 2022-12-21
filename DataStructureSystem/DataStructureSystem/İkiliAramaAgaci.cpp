#include "İkiliAramaAgaci.hpp"
#include <xpolymorphic_allocator.h>
using namespace std;

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
int İkiliAramaAgaci::yukseklik(DugumAgac* aktifDugum)
{
	if (aktifDugum)
	{
		return 1 + max(yukseklik(aktifDugum->sol),
			yukseklik(aktifDugum->sag));
	}
	return -1;
	
}
int İkiliAramaAgaci::Denge()
{
	 return Dengesizlik(kok);
}
int İkiliAramaAgaci::Dengesizlik(DugumAgac* aktifDugum)
{
	if (kok == 0)
		return 0;
	return yukseklik(aktifDugum->sol) - yukseklik(aktifDugum->sag);	
}
void İkiliAramaAgaci::sil(int veri)
{

}