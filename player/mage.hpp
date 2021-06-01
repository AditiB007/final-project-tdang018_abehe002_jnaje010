#ifndef __MAGE_HPP__
#define __MAGE_HPP__

#include "iPlayer.hpp"

using namespace std;

class Mage : public IPlayer {
  public:
    Mage();
    Mage(const string &n, int pow, int hp,
         int lvl, int exp, IArmor* arm, IWeapon* weap, IEquipFactory* fac);
    int attack();
    int useSkill();
};

#endif

