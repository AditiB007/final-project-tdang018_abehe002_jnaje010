#include "magEquipFactory.h"
#include "staff.h"
#include "robes.h"

MagEquipFactory::MagEquipFactory() {
	
}

void MagEquipFactory::makeEquipment(IPlayer* player) {
	//if(player->armor){delete player->weapon;}
	player->equipWeapon (new Staff());

	//if(player->weapon){delete player->armor;}
	player->equipArmor(new Robes());
}
