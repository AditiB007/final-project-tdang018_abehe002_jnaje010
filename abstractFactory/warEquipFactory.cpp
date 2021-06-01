#include "warEquipFactory.h"
#include "sword.h"
#include "chainmail.h"

WarEquipFactory::WarEquipFactory(){
	
}

void WarEquipFactory::makeEquipment(IPlayer* player){
	//if(player->weapon){delete player->weapon;}
	player->equipWeapon(new Sword());

	//if(player->armor){delete player->armor;}
	player->equipArmor(new Chainmail());
}
