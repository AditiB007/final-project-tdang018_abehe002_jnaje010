#ifndef __IWEAPON_H__
#define __IWEAPON_H__

#include "iEquipment.h"

class IWeapon : public IEquipment {
private:

protected:
	int attack;
	void setAttack(int);
public:
	IWeapon();
	int getAttack();
};

#endif

