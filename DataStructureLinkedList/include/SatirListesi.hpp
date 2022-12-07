#ifndef SatirListesi_hpp
#define SatirListesi_hpp
#include "Dugum.hpp"

class SatirListesi
{
public:
	SatirListesi();
	~SatirListesi();
	void add(int data);
	void sil(Node* silinecek);
	void print();
	double Ortalama();
	int count;
	 Node* first;
private:

};
#endif // !SatirListesi_hpp

