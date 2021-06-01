#include "iArmor.h"

IArmor::IArmor(){
	this->defense = 0;
}

void IArmor::setDefense(int def){
	this->defense = def;
}

int IArmor::getDefense(){
	return this->defense;
}
