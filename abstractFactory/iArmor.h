#ifndef __IARMOR_H__
#define __IARMOR_H__

#include "iEquipment.h"

class IArmor : public IEquipment {
private:

protected:
	int defense;
	void setDefense(int);
public:
	IArmor();
	int getDefense();
};

#endif

