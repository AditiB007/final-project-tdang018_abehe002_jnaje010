#ifndef __WARRIOR_HPP__
#define __WARRIOR_HPP__

#include "iPlayer.hpp"

using namespace std;

class Warrior : public IPlayer {
  public:
    Warrior();
    Warrior(const string &n, int pow, int hp,
            int lvl, int exp, IArmor* arm, IWeapon* weap, IEquipFactory* fac);
    int attack();
    int useSkill();
};

#endif

