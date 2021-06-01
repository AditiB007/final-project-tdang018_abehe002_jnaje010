#include "iWeapon.h"

IWeapon::IWeapon(){
	this->attack = 0;
}

void IWeapon::setAttack(int att){
	this->attack = att;
}

int IWeapon::getAttack(){
	return this->attack;
}
