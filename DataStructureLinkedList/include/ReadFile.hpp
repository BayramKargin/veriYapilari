#ifndef ReadFile_hpp
#define ReadFile_hpp

#include <iostream>
#include <fstream>
#include "SatirListesi.hpp"
#include "YoneticiListesi.hpp"

using namespace std;

class ReadFile
{
public:
    ReadFile();
    void  DosyaOku();
    void Parcala(string line);
};

#endif
