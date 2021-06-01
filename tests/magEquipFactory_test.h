#ifndef __MAGEQUIPFACTORY_TEST_H__
#define __MAGEQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/magEquipFactory.h"
#include "../player/mage.hpp"

TEST(MagFactTest, Init) {
	MagEquipFactory* test = new MagEquipFactory();

	delete test;	
}

TEST(MagFactTest, EquipMage) {
	MagEquipFactory* fact = new MagEquipFactory();
	Mage* mage = new Mage("Mage", 2, 3, 4, 5);
	fact->makeEquipment(mage);

	delete fact;
	delete mage;
}

#endif
