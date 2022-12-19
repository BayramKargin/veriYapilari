#include "Dugum.hpp"
Dugum::Dugum(int veri) {
	this->veri = veri;
	sonraki = 0;
}
Dugum::Dugum(Organ* organ)
{
	this->organ = organ;
	sonraki = 0;
}