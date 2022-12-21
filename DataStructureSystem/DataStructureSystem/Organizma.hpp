#ifndef Organizma_hpp
#define Organizma_hpp
//#include "Sistem.hpp"
#include "OrganizmaKuyruk.hpp"
class Organizma
{
public:
	Organizma();
	~Organizma();
	void OrganizmaSistemEkle(Sistem* sistem);
	Sistem* sistem;
	int sistemSayisi;
	OrgnizmaKuyruk* kuyruk;
private:

};

#endif // !Organizma_hpp
