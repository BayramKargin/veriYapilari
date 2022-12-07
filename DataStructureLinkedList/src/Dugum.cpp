/**
* @file ReadFiile.hpp
* @description Bu kısımda SatirListesi sınıfı için gerekn düğüm sınıfını oluşturdum.
* @course 2/C
* @assignment 1. Ödev
* @date Kodu 20/11/2022
* @author Bayram Kargin bayram.kargin@ogr.sakarya.edu.tr
*/
#include "Dugum.hpp"


Node::Node(int data)
{
    this->data = data;
    before = next = 0;

}