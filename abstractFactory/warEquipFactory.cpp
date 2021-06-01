#include "warEquipFactory.h"
#include "sword.h"
#include "chainmail.h"

WarEquipFactory::WarEquipFactory(){
	
}

void WarEquipFactory::makeEquipment(IPlayer* player){
	Sword* sword = new Sword();
	player->equipWeapon(sword);

	Chainmail* chainmail = new Chainmail();
	player->equipArmor(chainmail);
}
