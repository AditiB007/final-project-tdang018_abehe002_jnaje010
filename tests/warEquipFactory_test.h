#ifndef __WAREQUIPFACTORY_TEST_H__
#define __WAREQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/warEquipFactory.h"
#include "../player/warrior.hpp"


TEST(WarFactTest, Init) {
	WarEquipFactory* test = new WarEquipFactory();

	delete test;	
}

TEST(WarFactTest, EquipWarrior) {
	WarEquipFactory* fact = new WarEquipFactory();
	IPlayer* warrior = new Warrior("Warrior", 2, 3, 4, 5);
	fact->makeEquipment(warrior);

	delete fact;
	delete warrior;
}

#endif
