#ifndef __MAGEQUIPFACTORY_TEST_H__
#define __MAGEQUIPFACTORY_TEST_H__

#include "gtest/gtest.h"

#include "../abstractFactory/magEquipFactory.h"

TEST(MagFactTest, Init) {
	MagEquipFactory* test = new MagEquipFactory();

	delete test;	
}

#endif
