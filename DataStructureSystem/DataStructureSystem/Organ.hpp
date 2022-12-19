#ifndef Organ_hpp
#define Organ_hpp
#include "İkiliAramaAgaci.hpp"
#include "Doku.hpp"

class Organ
{
public:
	Organ();
	//~Organ();
	void OrganEkle(Doku* doku);
private:
	
	İkiliAramaAgaci* agac;
};
#endif // !Organ_hpp
