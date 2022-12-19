#ifndef ReadFile_hpp
#define ReadFile_hpp
#include <iostream>
using namespace std;

class ReadFile
{
public:
	ReadFile();
	//~ReadFile();
	void Read();
	Doku* Parcala(string line);
private:

};

#endif // !ReadFile_hpp
