#ifndef __WAREQUIPFACTORY_H__
#define __WAREQUIPFACTORY_H__

#include "iEquipFactory.h"

class WarEquipFactory : public IEquipFactory {
private:
	
public:
	WarEquipFactory();
	void makeEquipment(IPlayer*);
};

#endif

