#ifndef __MAGEQUIPFACTORY_H__
#define __MAGEQUIPFACTORY_H__

#include "iEquipFactory.h"
#include "iPlayer.hpp"

class MagEquipFactory {
private:

protected:

public:
	MagEquipFactory();
	void makeEquipment(IPlayer*);
};

#endif
