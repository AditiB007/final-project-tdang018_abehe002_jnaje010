#ifndef __GOBLIN_HPP__
#define __GOBLIN_HPP__

#include "iEnemy.hpp"
#include "../abstractFactory/iArmor.h"
#include "../abstractFactory/iWeapon.h"

using namespace std;

class Goblin : public IEnemy {
  private:
    IArmor* armor;
    IWeapon* weapon;
 //   IEquipFactory* factory;

  public:
    Goblin();
    Goblin(const string &n, int pow, int hp,
           int lvl, int exp, IArmor* arm, IWeapon* weap);
    int useSkill();
    int attack();
};

#endif
