/**
* @file ReadFiile.hpp
* @description Bu kısımda konsol ekranına yazdırma işlemi için gereken fonksiyonları tanımladım.
* @course 2/C
* @assignment 1. Ödev
* @date Kodu 20/11/2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Display.hpp"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include "SatirListesi.hpp"
#include "YoneticiListesi.hpp"

using namespace std;
void gotoxy(short x, short y) 
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

YoneticiDugum* Display::Write(YoneticiDugum* yonetici, int sayac) {
	int oklar = 0;
	YoneticiDugum* ilk = yonetici;
	while (sayac < 8 && yonetici != 0)
	{
		if (yonetici->before == 0)
		{
			gotoxy(sayac * 16, 0);
			cout << "ilk";
		}
		if (sayac == 0 && yonetici->before != 0)
		{
			gotoxy(sayac * 16, 0);
			cout << "<-----";
		}
		if (sayac == 7 && yonetici->next != 0)
		{
			gotoxy(sayac * 16, 0);
			cout << "        ---->";
		}
		if (yonetici->next == 0)
		{
			gotoxy(sayac * 16, 0);
			cout << "          Son";

		}
		gotoxy(sayac * 16, 1);
		cout << setw(11) << yonetici << endl;
		gotoxy(sayac * 16, 2);
		cout << "- - - - - - -";
		gotoxy((sayac * 16), 3);
		cout << setw(3) << "|" << yonetici->before << "|" << endl;
		gotoxy(sayac * 16, 4);
		cout << "- - - - - - -";
		gotoxy(sayac * 16, 5);
		cout << setw(3) << "|" << setw(8) << yonetici->ortalama << "|" << endl;
		gotoxy(sayac * 16, 6);
		cout << "- - - - - - -";
		gotoxy(sayac * 16, 7);
		cout << setw(3) << "|" << yonetici->next << "|" << endl;
		gotoxy(sayac * 16, 8);
		cout << "- - - - - - -";
		yonetici = yonetici->next;
		sayac++;
	}
	return yonetici;
}
void Display::SatirWrite(YoneticiDugum* yonetici,int sayac)
{
	//char girilen;
	int i = 12;
	sayac = sayac % 8;
	Node* temp = yonetici->satir->first;
	gotoxy(sayac * 16, 11);
	cout << "^^^^^^^^^^^^^";
	while (temp != 0)
	{
		gotoxy(sayac * 16, i);
		i++;
		cout << setw(11) << temp << endl;
 		gotoxy((sayac * 16), i);
		i++;
		cout << "- - - - - - -";
		gotoxy(sayac * 16, i);
		i++;
		cout << setw(3) << "|" << setw(8) << temp->data << "|" << endl;
		gotoxy(sayac * 16, i);
		i++;
		cout << "- - - - - - -";
		gotoxy(sayac * 16, i);
		i++;
		cout << setw(3) << "|" << temp->next << "|" << endl;
		//i++;
		gotoxy(sayac * 16, i);
		cout << "- - - - - - -"<< endl;
		temp = temp->next;
		i++;
		i++;
	}
}
Node* Display::silinecek(YoneticiDugum* yonetici, int sayac,int sira)
{
	int i = 12;
	sayac = sayac % 8;
	Node* temp = yonetici->satir->first;
	Node* silinecek = temp;
	gotoxy(sayac * 16, 11);
	cout << "^^^^^^^^^^^^^";
	while (temp != 0)
	{
		gotoxy(sayac * 16, i);
		i++;
		cout << setw(11) << temp << endl;
		gotoxy((sayac * 16), i);
		i++;
		cout << "- - - - - - -";
		gotoxy(sayac * 16, i);
		i++;
		cout << setw(3) << "|" << setw(8) << temp->data << "|" << endl;
		gotoxy(sayac * 16, i);
		i++;
		cout << "- - - - - - -";
		if (sira == 1)
		{
			silinecek = temp;
			gotoxy((sayac * 16)+15, (i-1));
			cout << "<---silinecek dugum";
		}
		gotoxy(sayac * 16, i);
		i++;
		cout << setw(3) << "|" << temp->next << "|" << endl;
		//i++;
		gotoxy(sayac * 16, i);
		cout << "- - - - - - -" << endl;
		temp = temp->next;
		i++;
		i++;
		sira--;
	}
	return silinecek;
}