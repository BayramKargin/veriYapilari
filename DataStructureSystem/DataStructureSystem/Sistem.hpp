#ifndef Sistem_hpp
#define Sistem_hpp

#include "Kuyruk.hpp"
#include "Organ.hpp"

class Sistem
{
public:
	Sistem();
	//~Sistem();
	void SistemEkle(Organ* organ);

private:
	Kuyruk* kuyruk;
};


#endif // !1
