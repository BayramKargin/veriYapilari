#ifndef Doku_hpp
#define Doku_hpp

#include "Hucre.hpp"
//#include "Kuyruk.hpp"
//#include "Organ.hpp"
class Doku
{

public:
	Doku();
	void DokuEkle(Hucre veri);
	void KuyrukEkle(int veri);
	int OrtancaGetir(Doku* doku);
	//void OrganYap(Doku* doku,int satir);
	//~Doku();
	Hucre* ilk;
	Hucre* son;
	int elemanSayisi;
	int satir;
private:
	
	
	//Organ* organ1;
};

#endif // !Doku_hpp
