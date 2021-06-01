#ifndef __ROGUE_HPP__
#define __ROGUE_HPP__

#include "iPlayer.hpp"

using namespace std;

class Rogue : public IPlayer {
  public:
    Rogue();
    Rogue(const string &n, int pow, int hp,
            int lvl, int exp, IArmor* arm, IWeapon* weap, IEquipFactory* fac);
    int attack();
    int useSkill();
};

#endif

