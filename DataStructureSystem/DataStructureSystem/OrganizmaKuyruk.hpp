#ifndef OrganizmaKuyruk_hpp
#define OrganizmaKuyruk_hpp

#include "DugumOrganizma.hpp"
#include "Sistem.hpp"

class OrgnizmaKuyruk
{
public:
	OrgnizmaKuyruk();
	~OrgnizmaKuyruk();
	void OrganizmaSistemEkle(Sistem* sistem);
	DugumOrganizma* ilk;
	DugumOrganizma* son;
	int elemanSayisi;
private:

};

#endif // !OrganizmaKuyruk_hpp
