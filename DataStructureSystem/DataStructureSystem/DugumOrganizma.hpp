#ifndef DugumOrganizma_hpp
#define DugumOrganizma_hpp
#include "Sistem.hpp"
class DugumOrganizma
{
public:
	DugumOrganizma(Sistem* sistem);
	~DugumOrganizma();
	Sistem* sistem;
	DugumOrganizma* organizmaSonraki;
private:

};

#endif // !DugumOrganizma_hpp
