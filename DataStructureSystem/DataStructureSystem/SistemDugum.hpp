#ifndef SistemDugum_hpp
#define SistemDugum_hpp
#include"Organ.hpp"
class SistemDugum
{
public:
	SistemDugum(Organ* organ);
	~SistemDugum();
	SistemDugum* sistemsonraki;
private:
	Organ* organ;

};

#endif // !SistemDugum_hpp
