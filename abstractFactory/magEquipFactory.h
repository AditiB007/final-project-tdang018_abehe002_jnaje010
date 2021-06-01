#ifndef __MAGEQUIPFACTORY_H__
#define __MAGEQUIPFACTORY_H__

#include "iEquipFactory.h"

class MagEquipFactory : public IEquipFactory {
private:

protected:

public:
	MagEquipFactory();
	void makeEquipment(IPlayer*);
};

#endif

