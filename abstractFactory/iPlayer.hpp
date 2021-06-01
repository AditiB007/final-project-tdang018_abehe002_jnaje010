#ifndef __IPLAYER_H__
#define __IPLAYER_H__

#include "iEntity.hpp"
#include "iArmor.h"
#include "iWeapon.h"

class IPlayer : public IEntity {
private:
	
protected:
	IArmor* armor;
	IWeapon* weapon;
public:
	IPlayer();
	void equipArmor(IArmor*);
	void equipWeapon(IWeapon*);
};

#endif
