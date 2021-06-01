#ifndef __WAREQUIPFACTORY_TEST_H__
#define __WAREQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/warEquipFactory.h"
#include "../player/warrior.hpp"
#include "../abstractFactory/magEquipFactory.h"
#include "../abstractFactory/rogEquipFactory.h"

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

	int attack = warrior->weapon->getAttack();
	EXPECT_EQ(attack, 3);
}

TEST(WarFactTest, WarriorSwapEquip) {
	IEquipFactory* fact = new WarEquipFactory();
	IPlayer* warrior = new Warrior("Warrior", 2, 3, 4, 5);
	fact->makeEquipment(warrior);

        int attack = warrior->weapon->getAttack();
	EXPECT_EQ(attack, 3);

	delete fact;
	fact = new MagEquipFactory();
	fact->makeEquipment(warrior);
	
	attack = warrior->weapon->getAttack();
	EXPECT_EQ(attack, 1);

	delete fact;
	fact = new RogEquipFactory();
	fact->makeEquipment(warrior);

	attack = warrior->weapon->getAttack();
	EXPECT_EQ(attack, 2);

	delete fact;
	delete warrior;
}

#endif
