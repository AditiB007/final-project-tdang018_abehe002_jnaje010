#ifndef __ROGEQUIPFACTORY_H__
#define __ROGEQUIPFACTORY_H__

#include "iEquipFactory.h"

class RogEquipFactory : public IEquipFactory {
private:

protected:

public:
	RogEquipFactory();
	void makeEquipment(IPlayer*);
};

#endif
