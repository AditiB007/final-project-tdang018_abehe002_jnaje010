#ifndef __ROGEQUIPFACTORY_TEST_H__
#define __ROGEQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/rogEquipFactory.h"
#include "../player/rogue.hpp"
#include "../abstractFactory/magEquipFactory.h"
#include "../abstractFactory/warEquipFactory.h"

TEST(RogFactTest, Init) {
	RogEquipFactory* test = new RogEquipFactory();

	delete test;	
}

TEST(RogFactTest, EquipRogue) {
	RogEquipFactory* fact = new RogEquipFactory();
	Rogue* rogue = new Rogue("Rogue", 2, 3, 4, 5);
	fact->makeEquipment(rogue);

	int attack = rogue->weapon->getAttack();
	EXPECT_EQ(attack, 2);

	delete fact;
	delete rogue;
}

TEST(RogFactTest, RogSwapEquip) {
	IEquipFactory* fact = new RogEquipFactory();
	IPlayer* rogue = new Rogue("Rogue", 2, 3, 4, 5);
	fact->makeEquipment(rogue);

        int attack = rogue->weapon->getAttack();
	EXPECT_EQ(attack, 2);

	delete fact;
	fact = new MagEquipFactory();
	fact->makeEquipment(rogue);
	
	attack = rogue->weapon->getAttack();
	EXPECT_EQ(attack, 1);

	delete fact;
	fact = new WarEquipFactory();
	fact->makeEquipment(rogue);

	attack = rogue->weapon->getAttack();
	EXPECT_EQ(attack, 3);

	delete fact;
	delete rogue;
}

#endif

