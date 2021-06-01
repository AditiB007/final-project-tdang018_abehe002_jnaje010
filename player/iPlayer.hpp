#ifndef __IPLAYER_HPP__
#define __IPLAYER_HPP__

#include "../entity/iEntity.hpp"
#include "../abstractFactory/iArmor.h"
#include "../abstractFactory/iWeapon.h"
//#include "../abstractFactory/iEquipFactory.h"

#include <iostream>

using namespace std;

class IPlayer : public IEntity {
  private:
    IArmor* armor;
    IWeapon* weapon;
//    IEquipFactory* factory;

  public:
    IPlayer();
    IPlayer(const string &n, int pow, int hp,
            int lvl, int exp, IArmor* arm, IWeapon* weap);
    void run();
    void equipArmor(IArmor* arm);
    void equipWeapon(IWeapon* weap);
    virtual int useSkill() = 0;
    virtual int attack() = 0;
};

#endif
