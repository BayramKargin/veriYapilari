#include "Kontrol.hpp"

Kontrol::Kontrol(Organizma* organizma)
{
	this->organizma = organizma;
}
Kontrol::~Kontrol()
{

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
			}
			sistemgec = sistemgec->sistemsonraki;
		}
		organizmagec = organizmagec->organizmaSonraki;
	}
}