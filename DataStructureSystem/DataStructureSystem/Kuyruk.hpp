#ifndef Kuyruk_hpp
#define Kuyruk_hpp
#include "Dugum.hpp"

class Kuyruk
{
public:
	Kuyruk();
	~Kuyruk();
	void ekle(int veri);
	void cikar();
	bool bosmu();
	int getir();
	int elemanSayisiGetir();
	Dugum* ilk;
	Dugum* son;
	int elemanSayisi;

};
#endif // !Kuyruk_hpp
