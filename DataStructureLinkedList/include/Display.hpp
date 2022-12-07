#ifndef Display_hpp
#define Display_hpp

#include "YoneticiListesi.hpp"
#include "YoneticiDugum.hpp"

class Display
{
public:

	YoneticiDugum* Write(YoneticiDugum* yonetici, int sayac);
	void SatirWrite(YoneticiDugum* yonetici, int sayac);
	Node* silinecek(YoneticiDugum* yonetici, int sayac, int sira);
private:

};
#endif // !Display_hpp

