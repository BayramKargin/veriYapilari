#ifndef Radix_hpp
#define Radix_hpp
#include "Kuyruk.hpp"
class Radix
{
public:
	Radix(Kuyruk* kuyruk,int adet);
	~Radix();

	Kuyruk* Sirala();
    int maxBasamakSayisiGetir();
    int basamakSayisiGetir(int sayi);
    void kuyruklariYazdir();
    void kuyrukUzunluklariGetir(int* uzunluklar);

    Kuyruk** kuyruklar;
    Kuyruk* kuyruk;
    int* sayilar;
    int sayiAdedi;
private:

};
#endif // !Radix_hpp
