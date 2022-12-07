#ifndef YoneticiListesi_hpp
#define YoneticiListesi_hpp
#include "SatirListesi.hpp"
#include "YoneticiDugum.hpp"

class YoneticiListesi
{
public:
	YoneticiListesi();
	void yaz();
	void add(SatirListesi* satir, double ortalama);
	void sil(YoneticiDugum* silinicek);
	int sirala(YoneticiDugum* yeni);
	YoneticiDugum* sekizileri(YoneticiDugum* eight);
	YoneticiDugum* sekizc(int i);
	YoneticiDugum* sekizd(YoneticiDugum* eight);
	YoneticiDugum* sekiza(YoneticiDugum* eight);
	YoneticiDugum* first;
	int count;
private:

};

#endif // !YoneticiListesi_hpp
