#include "rogEquipFactory.h"
#include "dagger.h"
#include "leather.h"

RogEquipFactory::RogEquipFactory() {
	
}

void RogEquipFactory::makeEquipment(IPlayer* player) {
	player->equipWeapon(new Dagger());
	player->equipArmor(new Leather());
}
