#ifndef __ROGEQUIPFACTORY_TEST_H__
#define __ROGEQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/rogEquipFactory.h"

TEST(RogFactTest, Init) {
	RogEquipFactory* test = new RogEquipFactory();

	delete test;	
}

#endif

