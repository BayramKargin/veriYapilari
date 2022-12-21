#ifndef Kuyruk_hpp
#define Kuyruk_hpp

#include "Dugum.hpp"
//#include "Organ.hpp"
#include "SistemDugum.hpp"
//#include "DugumOrganizma.hpp"

class Kuyruk
{
public:
	Kuyruk();
	~Kuyruk();
	void ekle(int veri);
	void KuyrukOrganEkle(Organ* organ);
	//void KuyrukSistemEkle(Sistem* sistem);
	void cikar();
	bool bosmu();
	int getir();
	int elemanSayisiGetir();

	Dugum* ilk ;
	Dugum* son;
	int elemanSayisi;

	SistemDugum* sistemilk;
	SistemDugum* sistemson;
	int sistemelemanSayisi;

	/**DugumOrganizma* organizmailk;
	DugumOrganizma* organizmason;
	int organizmaElemanSayisi;*/

	
};
#endif // !Kuyruk_hpp
