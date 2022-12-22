#ifndef Organ_hpp
#define Organ_hpp
#include "IkiliAramaAgaci.hpp"
#include "Doku.hpp"

class Organ
{
public:
	Organ(IkiliAramaAgaci* agac);
	//~Organ();
	void OrganEkle(Doku* doku);
	IkiliAramaAgaci* agac;
	Doku* doku;
private:

};
#endif // !Organ_hpp
