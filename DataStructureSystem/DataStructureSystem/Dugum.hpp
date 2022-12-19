#ifndef Dugum_hpp
#define Dugum_hpp
#include "Organ.hpp"
class Dugum
{
public:
	Dugum(int veri);
	Dugum(Organ* organ);
	int veri;
	Dugum* sonraki;
	Organ* organ;
};

#endif
