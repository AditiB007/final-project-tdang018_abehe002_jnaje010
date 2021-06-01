#ifndef __MAGEQUIPFACTORY_TEST_H__
#define __MAGEQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/magEquipFactory.h"
#include "../player/mage.hpp"
#include "../abstractFactory/rogEquipFactory.h"
#include "../abstractFactory/warEquipFactory.h"

TEST(MagFactTest, Init) {
	MagEquipFactory* test = new MagEquipFactory();

	delete test;	
}

TEST(MagFactTest, EquipMage) {
	MagEquipFactory* fact = new MagEquipFactory();
	Mage* mage = new Mage("Mage", 2, 3, 4, 5);
	fact->makeEquipment(mage);

	int attack = mage->weapon->getAttack();
	EXPECT_EQ(attack, 1);

	delete fact;
	delete mage;
}

TEST(MagFactTest, MageSwapEquip) {
	IEquipFactory* fact = new MagEquipFactory();
	IPlayer* mage = new Mage("Mage", 2, 3, 4, 5);
	fact->makeEquipment(mage);

        int attack = mage->weapon->getAttack();
	EXPECT_EQ(attack, 1);

	delete fact;
	fact = new RogEquipFactory();
	fact->makeEquipment(mage);
	
	attack = mage->weapon->getAttack();
	EXPECT_EQ(attack, 2);

	delete fact;
	fact = new WarEquipFactory();
	fact->makeEquipment(mage);

	attack = mage->weapon->getAttack();
	EXPECT_EQ(attack, 3);

	delete fact;
	delete mage;

}

#endif
