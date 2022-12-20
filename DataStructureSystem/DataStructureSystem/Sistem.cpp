#include "Sistem.hpp"

Sistem::Sistem(Kuyruk* kuyruk)
{
	this->kuyruk = kuyruk;
}
void Sistem::SistemEkle(Organ* organ)
{
	kuyruk->KuyrukOrganEkle(organ);
}
