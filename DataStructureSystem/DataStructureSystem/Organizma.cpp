#include "Organizma.hpp"

Organizma::Organizma()
{
	kuyruk = new OrgnizmaKuyruk();
	sistemSayisi = 0;
}
Organizma::~Organizma()
{

}
void Organizma::OrganizmaSistemEkle(Sistem* sistem)
{
	kuyruk->OrganizmaSistemEkle(sistem);
	sistemSayisi++;
}