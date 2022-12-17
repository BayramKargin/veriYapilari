#ifndef Doku_hpp
#define Doku_hpp
#include "Hucre.hpp"
#include "Kuyruk.hpp"
class Doku
{

public:
	Doku();
	void DokuEkle(Hucre veri);
	void KuyrukEkle(int veri);
	int OrtancaGetir(Doku* doku);
	//~Doku();

	int elemanSayisi;
private:
	Hucre* ilk;
	Hucre* son;
};

#endif // !Doku_hpp
