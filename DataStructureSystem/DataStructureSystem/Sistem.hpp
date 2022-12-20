#ifndef Sistem_hpp
#define Sistem_hpp

#include "Kuyruk.hpp"
#include "Organ.hpp"

class Sistem
{
public:
	Sistem(Kuyruk* kuyruk);
	//~Sistem();
	void SistemEkle(Organ* organ);
	Kuyruk* kuyruk;
private:

};


#endif // !1
