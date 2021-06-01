#ifndef __WAREQUIPFACTORY_TEST_H__
#define __WAREQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/warEquipFactory.h"

TEST(WarFactTest, Init) {
	WarEquipFactory* test = new WarEquipFactory();

	delete test;	
}

#endif
