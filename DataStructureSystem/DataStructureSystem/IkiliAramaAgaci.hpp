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
	int* PostOrder(DugumAgac* aktifDugum);
	void Dolas(DugumAgac* aktifDugum);
	int Dengesizlik(DugumAgac* aktfiDugum);
	int yukseklik(DugumAgac* aktfiDugum);
	void Agacsil(IkiliAramaAgaci* agac);
	int elemanSayisigetir();
	void ekle(int veri);
	void sil(DugumAgac* aktifDugum);
	DugumAgac* kok;
	Doku* doku;
	int elemanSayisi;
	int i;
	int* dizi;
private:

};

#endif // !IkiliAramaAgaci_hpp
