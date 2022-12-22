#ifndef IkiliAramaAgaci_hpp
#define IkiliAramaAgaci_hpp
#include "DugumAgac.hpp"
class IkiliAramaAgaci
{
public:
	IkiliAramaAgaci();
	~IkiliAramaAgaci();
	//bool varmi(int veri);
	void ekle(Doku* doku,DugumAgac* aktifDugum);
	int Denge();
	void PostOrder(DugumAgac* aktifDugum);
	void Dolas(DugumAgac* aktifDugum);
	int Dengesizlik(DugumAgac* aktfiDugum);
	int yukseklik(DugumAgac* aktfiDugum);
	int elemanSayisigetir();
	void ekle(int veri);
	void sil(int veri);
	DugumAgac* kok;
	Doku* doku;
	int elemanSayisi;
private:

};

#endif // !IkiliAramaAgaci_hpp
