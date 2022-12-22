#ifndef DugumAgac_hpp
#define DugumAgac_hpp
#include"Doku.hpp"
class DugumAgac
{
public:
	DugumAgac(int veri,Doku* doku);
	int veri;
	DugumAgac* sol;
	DugumAgac* sag;
	Doku* doku;
};
#endif // !DugumAgac_hpp
