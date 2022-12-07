/**
* @file YoneticiListesi.hpp
* @description Bu kısımda YoneticiListesi sınıfını eleman ekleme silme işleri için gereken kısımları tanımladım.
* @course 2/C
* @assignment 1. Ödev
* @date Kodu 20/11/2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "YoneticiListesi.hpp"
#include "Display.hpp"
#include <iostream>
#include <iomanip>

using namespace std;
//kurucu fonksiyon
YoneticiListesi::YoneticiListesi() {
	first = 0;
	count = 0;
}
//yeni düğüm ekleme iişlemi için 
void YoneticiListesi::add(SatirListesi* satir, double ortalama) {

	YoneticiDugum* yeniDugum = new YoneticiDugum(satir, ortalama);
	//eklenen düğüm illk düğüm ise
	if (first == 0)
	{
		first = yeniDugum;
	}
	//birden fazla düğüm var ise 
	else
	{
		YoneticiDugum* temp = first;
		if (yeniDugum->ortalama < first->ortalama)
		{
			yeniDugum->next = first;
			first->before = yeniDugum;
			first = yeniDugum;
		}
		else
		{
			while (temp->next != 0)
			{
				if (temp->next->ortalama > yeniDugum->ortalama)
				{
					YoneticiDugum* sonraki = temp->next;
					temp->next = yeniDugum;
					yeniDugum->before = temp;
					yeniDugum->next = sonraki;
					sonraki->before = yeniDugum;
					break;
				}
				temp = temp->next;
			}
			if (temp->next == 0 && temp->ortalama < yeniDugum->ortalama)
			{
				temp->next = yeniDugum;
				yeniDugum->before = temp;
			}
		}
	}
	count++;
}
void YoneticiListesi::sil(YoneticiDugum* silinecek)
{
	//silinceek var mı kontrolu için
	if (silinecek)
	{
		//silme işlemi için silinecek önceki ve sonraki düğmleri belirlenmesi
		YoneticiDugum* silinecekonceki = silinecek->before;
		YoneticiDugum* silineceksonraki = silinecek->next;
		if (silineceksonraki)
		{
			silineceksonraki->before = silinecekonceki;
		}
		if (silinecekonceki)
		{
			silinecekonceki->next = silineceksonraki;
		}
		else
			first = silineceksonraki;
		delete silinecek;
		
	}
}

void YoneticiListesi::yaz()
{
	YoneticiDugum* temp = first;
	YoneticiDugum* yonet = first;
	int i = 0;
	int y = 0;
	char girilen;
	Display ekran;
	system("cls");
		//ilk durumu yazdırmak için
		YoneticiDugum* sekiz= ekran.Write(first, 0);
		ekran.SatirWrite(temp, i);

		while (1)
		{
			cin >> girilen;

			system("cls");

			if (girilen == 'c')
			{
				//i 0 dan küçük ise çok fazla z tuşu kullanılmış bu yüzden i yi 0 dan başlatıyoruz
				if (i < 0)
				{
					i = 0;
				}
				//bir sonraki 8 taneyi yazdırmak için
				if ((i > 6) && ((i+1) % 8 == 0))
				{
					sekiz = sekizc(i);
					yonet = sekiz;
					temp = yonet;
					temp = temp->before;
				}

				if (temp ->next == 0)
				{
					ekran.Write(yonet, 0);
					ekran.SatirWrite(temp, i);
				}
				else
				{
					temp = temp->next;
					i++;
					ekran.Write(yonet, 0);
					ekran.SatirWrite(temp, i);
				}
			}
			else if (girilen == 'z')
			{
				i--;
				if (i < 0)
				{
					ekran.Write(temp, 0);
					ekran.SatirWrite(temp, y);
				}
				else 
				{
					if ((i + 1 ) % 8 == 0)
					{
						if (yonet->before == 0)
						{
							yonet = yonet;
						}
						else
							yonet = yonet->before->before->before->before->before->before->before->before;
					}
					temp = temp->before;
					ekran.Write(yonet, 0);
					ekran.SatirWrite(temp, i);
				}

			}
			else if (girilen == 'd')
			{
				YoneticiDugum* sekizatla = sekizd(yonet);
				ekran.Write(sekizatla, 0);
				temp = sekizatla;
				int a = i % 8;
				//int b = 0;
				for (int  j= 0; j <a ; j++)
				{

					if (temp->next == NULL)
					{
						i = i - (a - j);
						break;
					}
					temp = temp->next;

				}
				ekran.SatirWrite(temp, i);
				if (yonet != sekizatla)
				{
					yonet = sekizatla;
					i = i + 8;
				}
			}
			else if(girilen == 'a')
			{
				YoneticiDugum* sekizatla = sekiza(yonet);
				ekran.Write(sekizatla, 0);
				temp = sekizatla;
				int a = i % 8;
				for (int j = 0; j < a; j++)
				{
					temp = temp->next;
				}
				ekran.SatirWrite(temp, i);
				if (yonet != sekizatla)
				{
					yonet = sekizatla;
					i = i - 8;
				}
			}
			else if (girilen == 'p')
			{
				YoneticiDugum* silinecek = temp;
				if (temp == yonet)
				{
					if (yonet->next == 0)
					{
						yonet = sekiza(yonet);
						temp = yonet;
					}
					else
					{
						yonet = yonet->next;
						temp = yonet;
					}
				}
				else
				{
					if (!(temp->before))
					{
						temp = temp->next;
					}
					else if (!(temp->next))
					{
						temp = temp->before;
						i--;
					}
					else
					{
						temp = temp->before;
						i--;
					}
				}
				sil(silinecek);
				ekran.Write(yonet, 0);
				ekran.SatirWrite(temp, i);
			}
			else if (girilen == 'k')
			{
				int degisim = 0;
				ekran.Write(yonet, 0);
				Node* silinecek =ekran.silinecek(temp, i, rand()% (temp->satir->count)+1);
				cin >> girilen;

				system("cls");
				if (girilen == 'k')
				{
					temp->satir->sil(silinecek);
					temp->ortalama=temp->satir->Ortalama();
					if (temp->ortalama == 0)
					{
						YoneticiDugum* silinecek = temp;
						if (temp == yonet)
						{
							if (yonet->next == 0)
							{
								yonet = sekiza(yonet);
								temp = yonet;
							}
							else
							{
								yonet = yonet->next;
								temp = yonet;
							}
						}
						else
						{
							if (!(temp->before))
							{
								temp = temp->next;
							}
							else if (!(temp->next))
							{
								temp = temp->before;
								i--;
							}
							else
							{
								temp = temp->before;
								i--;
							}
						}
						sil(silinecek);
						ekran.Write(yonet, 0);
						ekran.SatirWrite(temp, i);
					}
					else
					{
						degisim = sirala(temp);
						i = i + degisim;
					}
					if (i > 8)
					{
						int atla = i / 8;
						yonet = first;
						for (int i = 0; i <(atla); i++)
						{
							yonet = sekizd(yonet);
						}
					}if (i <= 0)
					{
						yonet = first;
					}
					ekran.Write(yonet, 0);
					ekran.SatirWrite(temp, i);
				}
			}
		}
}
// sekiz düğm ileri içim
YoneticiDugum* YoneticiListesi::sekizc(int i)
{
	YoneticiDugum* temp = first;
	int sekizli = (i+1) / 8;
	while (sekizli > 0)
	{
		for (int  i = 0; i < 8; i++)
		{
			temp = temp->next;
		}
		sekizli--;
	}
	return temp;
}
YoneticiDugum* YoneticiListesi::sekizd(YoneticiDugum* eight)
{
	YoneticiDugum* temp1 = eight;
		for (int i = 0; i < 8; i++)
		{
			if (eight->next != 0)
			{
				eight = eight->next;
			}
			else
			{
				eight = temp1;
				break;
			}
		}
	return eight;
}
YoneticiDugum* YoneticiListesi::sekizileri(YoneticiDugum* eight)
{
	YoneticiDugum* temp1 = eight;
	eight = first;
	for (int i = 0; i < 8; i++)
	{
		if (eight->next != 0)
		{
			eight = eight->next;
		}
		else
		{
			eight = temp1;
			break;
		}
	}
	return eight;
}
YoneticiDugum* YoneticiListesi::sekiza(YoneticiDugum* eight)
{
	YoneticiDugum* tempa = eight;
	
	for (int i = 0; i < 8; i++)
	{
		if (eight != 0)
		{
			eight = eight->before;
		}
		else
		{
			eight = tempa;
		}
	}
	return eight;
}
int YoneticiListesi::sirala(YoneticiDugum* yeni)
{
	YoneticiDugum* onceki = yeni->before;
	YoneticiDugum* sonraki = yeni->next;
	int sira = 0;
	while (onceki != 0)
	{
		YoneticiDugum* onceki = yeni->before;
		YoneticiDugum* sonraki = yeni->next;

		if (onceki->ortalama > yeni->ortalama)
		{
			if (onceki == first)
			{
				onceki->next = sonraki;
				sonraki->before = onceki;
				yeni->next = first;
				first->before = yeni;
				yeni->before = 0;
				first = yeni;
				sira--;
				break;				
			}

			else if (yeni->next == 0 || sonraki == 0)
			{
				yeni->before = onceki->before;
				onceki->before->next = yeni;
				yeni->next = onceki;
				onceki->before = yeni;
				onceki->next = 0;
				sira--;
			}
			else
			{
				onceki->next = sonraki;
				yeni->before = onceki->before;
				onceki->before->next = yeni;
				yeni->next = onceki;
				sonraki->before = onceki;
				sira--;
			}
		}
		else if (sonraki == 0)
		{
			break;
		}
		else if (sonraki->ortalama < yeni->ortalama)
		{
			onceki->next = sonraki;
			yeni->next = sonraki->next;
			yeni->before = sonraki;
			sonraki->before = onceki;
			sonraki->next= yeni;
			sira++;
			if (yeni->next == 0)
			{
				break;
			}
		}
		else
			break;
	}
	return sira;
}