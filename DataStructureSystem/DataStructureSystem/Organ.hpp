#ifndef Organ_hpp
#define Organ_hpp
#include "İkiliAramaAgaci.hpp"
#include "Doku.hpp"

class Organ
{
public:
	Organ();
	//~Organ();
	void OrganDokuEkle(Doku* doku);

private:
	İkiliAramaAgaci* agac;
	int satir; //20 doku
};
#endif // !Organ_hpp
