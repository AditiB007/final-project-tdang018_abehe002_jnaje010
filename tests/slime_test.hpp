#ifndef __SLIME_TEST_HPP__
#define __SLIME_TEST_HPP__

#include "../entity/slime.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(SlimeTest1, Init) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);
	
	delete test;
}

TEST(SlimeTest2, Name) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);
	
	EXPECT_EQ(test->getName(), "Slime");
}

TEST(SlimeTest3, Level) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);

	EXPECT_EQ(test->getLevel(), 1);
}

TEST(SlimeTest4, Health) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);
	
	EXPECT_EQ(test->getHealth(), 10);
}

TEST(SlimeTest5, Power) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);
	
	EXPECT_EQ(test->getPower(), 1);
}

TEST(SlimeTest6, Exp) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);

	EXPECT_EQ(test->getExperience(), 0);
}

TEST(SlimeTest7, Attack) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);
	
	EXPECT_EQ(test->attack(), 0);
}

TEST(SlimeTest8, Skill) {
	IEnemy* test = new Slime("Slime", 1, 10, 1, 0, 0);
	
	EXPECT_EQ(test->useSkill(), 1);
}

TEST(SlimeTest9, Split) {
	Slime* test = new Slime("Slime", 1, 10, 1, 0, 0);

	test->split();
	test->attack();
}

#endif
