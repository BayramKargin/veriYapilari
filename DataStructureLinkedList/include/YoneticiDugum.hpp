#ifndef YoneticiDugum_hpp
#define YoneticiDugum_hpp
#include "SatirListesi.hpp"

class YoneticiDugum {
public:
	YoneticiDugum(SatirListesi* satir, double ortalama);
	SatirListesi* satir;
	double ortalama;
	YoneticiDugum* next;
	YoneticiDugum* before;
};

#endif