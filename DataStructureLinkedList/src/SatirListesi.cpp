/**
* @file ReadFiile.hpp
* @description Bu kısımda SatirListesi sınıf için gereken fonksiyonları tanımladım.
* @course 2/C
* @assignment 1. Ödev
* @date Kodu 20/11/2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
**/
#include "SatirListesi.hpp"
#include "Dugum.hpp"
#include <iostream>
using namespace std;
SatirListesi::SatirListesi()
{
    first = 0;
    count = 0;
}
void SatirListesi::add(int data)
{
    Node* newNode = new Node(data);
    if (first == 0) {
        first = newNode;
    }
    else
    {
        Node* temp = first;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->before = temp;
    }
    count++;
}
double SatirListesi::Ortalama()
{
    Node* temp = first;
    double  toplam = 0;
    int sayac = 0;
    if (temp == 0)
    {
        return 0;
    }
    while (temp != 0)
    {
        toplam = toplam + temp->data;
        temp = temp->next;
        sayac++;
    }
    int temportalama = ((toplam / sayac)*10);
    double ortalama = temportalama / 10.0;
    return (ortalama);
}
void SatirListesi::sil(Node* silinecek)
{
    if (silinecek)
    {
        Node* silinecekonceki = silinecek->before;
        Node* silineceksonraki = silinecek->next;
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
        count--;
    }
}
void SatirListesi::print()
{
    Node* temp = first;
    while (temp != 0)
    {
        cout << temp->data << "-";
        temp = temp->next;
    }
    cout << endl;
}