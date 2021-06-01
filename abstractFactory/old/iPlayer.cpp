#include "iPlayer.hpp"

IPlayer::IPlayer(){
	this->armor = nullptr;
	this->weapon = nullptr;
}

void IPlayer::equipWeapon(IWeapon* weapon){
	if(this->weapon){delete this->weapon;}
	this->weapon = weapon;
}

void IPlayer::equipArmor(IArmor* armor){
	if(this->armor){delete this->armor;}
	this->armor = armor;
}
