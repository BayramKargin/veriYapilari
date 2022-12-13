#include "ReadFile.hpp"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

ReadFile::ReadFile()
{

}
void ReadFile::Parcala(string line) {
    int number = 0;
    for (int i = 0; i < line.length(); i++)
    {
        string stringNumber = "";
        if (line[i] != ' ')
        {
            while (line[i] != ' ' && i < line.length())
            {
                stringNumber = stringNumber + line[i];
                i++;
            }
            number = stoi(stringNumber);
            cout << number << endl;
        }
    }
    cout <<"--------------------------------" << endl;
}
void ReadFile::Read()
{
	ifstream dosyaOku;
	dosyaOku.open("Veri.txt");
	string line;
	while (getline(dosyaOku,line))
	{
        Parcala(line);
	}

	dosyaOku.close();
}