#ifndef Kuyruk_hpp
#define Kuyruk_hpp
#include "Dugum.hpp"
#include "Organ.hpp"
#include "SistemDugum.hpp"
class Kuyruk
{
public:
	Kuyruk();
	~Kuyruk();
	void ekle(int veri);
	void KuyrukOrganEkle(Organ* organ);
	void cikar();
	bool bosmu();
	int getir();
	int elemanSayisiGetir();
	Dugum* ilk ;
	Dugum* son;
	SistemDugum* sistemilk;
	SistemDugum* sistemson;
	int sistemelemanSayisi;
	int elemanSayisi;
	
};
#endif // !Kuyruk_hpp
