#ifndef __IEQUIPFACTORY_H__
#define __IEQUIPFACTORY_H__

#include "iEquipFactory.h"
//#include "../baseClasses/iEntity.h"
#include "../abstractFactory/iEntity.hpp"

class IEquipFactory {
private:
	

public:
	IEquipFactory();
	virtual void makeEquipment(IEntity*) = 0;
};

#endif

