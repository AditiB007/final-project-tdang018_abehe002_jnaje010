#ifndef __IEQUIPFACTORY_H__
#define __IEQUIPFACTORY_H__

#include "iEquipFactory.h"
//#include "../baseClasses/iEntity.h"
#include "../abstractFactory/iPlayer.hpp"

class IEquipFactory {
private:

protected:	

public:
	IEquipFactory();
	virtual void makeEquipment(IPlayer*) = 0;
};

#endif

