#ifndef __RAT_TEST_HPP__
#define __RAT_TEST_HPP__

#include "../entity/rat.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(RatTest1, Init) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);
	
	delete test;
}

TEST(RatTest2, Name) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);
	
	EXPECT_EQ(test->getName(), "Rat");
}

TEST(RatTest3, Level) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);

	EXPECT_EQ(test->getLevel(), 1);
}

TEST(RatTest4, Health) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);
	
	EXPECT_EQ(test->getHealth(), 10);
}

TEST(RatTest5, Power) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);
	
	EXPECT_EQ(test->getPower(), 1);
}

TEST(RatTest6, Exp) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);

	EXPECT_EQ(test->getExperience(), 0);
}

TEST(RatTest7, Attack) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);
	
	EXPECT_EQ(test->attack(), 1);
}

TEST(RatTest8, Skill) {
	IEnemy* test = new Rat("Rat", 1, 10, 1, 0);
	
	EXPECT_EQ(test->useSkill(), 1);
}

#endif
