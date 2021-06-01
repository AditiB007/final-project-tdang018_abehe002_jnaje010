#include "warEquipFactory_test.h"
#include "magEquipFactory_test.h"
#include "rogEquipFactory_test.h"
#include "rat_test.hpp"
#include "slime_test.hpp"
#include "goblin_test.hpp"

#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
