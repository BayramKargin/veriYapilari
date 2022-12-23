#include "Kontrol.hpp"
#include <iostream>
using namespace std;

Kontrol::Kontrol(Organizma* organizma)
{
	this->organizma = organizma;
}
Kontrol::~Kontrol()
{

}
IkiliAramaAgaci* Kontrol::YeniAgac(int* dizi)
{
	IkiliAramaAgaci* agac = new IkiliAramaAgaci();
	for (int i = 0; i < 20; i++)
	{
		agac->ekle(dizi[i]);
	}
	return agac;
}
void Kontrol::KontrolEt()
{
	DugumOrganizma* organizmagec= organizma->kuyruk->ilk;
	SistemDugum* sistemgec = organizma->kuyruk->ilk->sistem->kuyruk->sistemilk;
	IkiliAramaAgaci* agac1;
	while (organizmagec != 0)
	{
		sistemgec = organizma->kuyruk->ilk->sistem->kuyruk->sistemilk;
		while (sistemgec !=0)
		{
			if ((sistemgec->organ->agac->kok->veri) % 50 == 0)
			{
				DugumAgac* dolasilanAgac = sistemgec->organ->agac->kok;
				sistemgec->organ->agac->Dolas(dolasilanAgac);
				int * dizi =sistemgec->organ->agac->PostOrder(dolasilanAgac);
				sistemgec->organ->agac->Agacsil(sistemgec->organ->agac);
				for (int  i = 0; i < 20; i++)
				{
					cout << dizi[i]<<endl;
				}
				agac1 = YeniAgac(dizi);
			}
			sistemgec = sistemgec->sistemsonraki;
		}
		organizmagec = organizmagec->organizmaSonraki;
	}
}