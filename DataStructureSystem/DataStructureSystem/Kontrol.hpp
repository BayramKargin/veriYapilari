#ifndef Kontrol_hpp
#define Kontrol_hpp

#include "Organizma.hpp"

class Kontrol
{
public:
	Kontrol(Organizma* organizma);
	~Kontrol();
	void KontrolEt();
	IkiliAramaAgaci* YeniAgac(int* dizi);
	Organizma* organizma;
private:

};
#endif // !Kontrol_hpp
