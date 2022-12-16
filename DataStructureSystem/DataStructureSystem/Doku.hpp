#ifndef Doku_hpp
#define Doku_hpp
#include "Hucre.hpp"
class Doku
{

public:
	Doku(Hucre veri);
	void DokuEkle(Hucre veri);
	//~Doku();

	int elemanSayisi;
private:
	Hucre* ilk;
};

#endif // !Doku_hpp
