#include "Sistem.hpp"

Sistem::Sistem()
{
	kuyruk = 0;
}
void Sistem::SistemEkle(Organ* organ)
{
	kuyruk->KuyrukOrganEkle(organ);
}
