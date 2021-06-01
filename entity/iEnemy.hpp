#ifndef __IENEMY_HPP__
#define __IENEMY_HPP__

#include "iEntity.hpp"

using namespace std;

class IEnemy : public IEntity {
  public:
    IEnemy();
    IEnemy(const string &n, int pow, int hp, int lvl, int exp);
    virtual int useSkill() = 0;
    virtual int attack() = 0;
};

#endif
