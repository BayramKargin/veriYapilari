#ifndef Organ_hpp
#define Organ_hpp
#include "İkiliAramaAgaci.hpp"
#include "Doku.hpp"

class Organ
{
public:
	Organ(İkiliAramaAgaci* agac);
	//~Organ();
	void OrganEkle(Doku* doku);
private:
	
	İkiliAramaAgaci* agac;
};
#endif // !Organ_hpp
