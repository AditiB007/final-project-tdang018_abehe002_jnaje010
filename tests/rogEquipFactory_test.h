#ifndef __ROGEQUIPFACTORY_TEST_H__
#define __ROGEQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/rogEquipFactory.h"
#include "../player/rogue.hpp"

TEST(RogFactTest, Init) {
	RogEquipFactory* test = new RogEquipFactory();

	delete test;	
}

TEST(RogFactTest, EquipRogue) {
	RogEquipFactory* fact = new RogEquipFactory();
	Rogue* rogue = new Rogue("Rogue", 2, 3, 4, 5);
	fact->makeEquipment(rogue);

	delete fact;
	delete rogue;
}

#endif

