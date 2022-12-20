#ifndef İkiliAramaAgaci_hpp
#define İkiliAramaAgaci_hpp
#include "DugumAgac.hpp"

class İkiliAramaAgaci
{
public:
	İkiliAramaAgaci();
	~İkiliAramaAgaci();
	//bool varmi(int veri);
	void ekle(int veri,DugumAgac* aktifDugum);
	void ekle(int veri);
	void sil(int veri);
	DugumAgac* kok;
private:

};

#endif // !İkiliAramaAgaci_hpp
