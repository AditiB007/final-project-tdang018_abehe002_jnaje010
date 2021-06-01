#ifndef __RAT_HPP__
#define __RAT_HPP__

#include "iEnemy.hpp"

using namespace std;

class Rat : public IEnemy {
  private:

  public:
    Rat();
    Rat(const string &n, int pow, int hp, int lvl, int exp);
    int useSkill();
    int attack();
};

#endif
