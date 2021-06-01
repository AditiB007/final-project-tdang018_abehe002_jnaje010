#include "iEquipment.h"

IEquipment::IEquipment(){
	this.name = "";
}

void IEquipment::setName(string str){
	this.name = str;
}

string IEquipment::getName(){
	return this.name;
}
