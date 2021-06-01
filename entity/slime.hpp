#ifndef __SLIME_HPP__
#define __SLIME_HPP__

#include <vector>
#include "iEnemy.hpp"

using namespace std;

class Slime : public IEnemy {
  private:
    vector<Slime> slimes;
    int number;

  public:
    Slime();
    Slime(const string &n, int pow, int hp, int lvl, int exp, int num);
    int getNumber() const;
    int useSkill();
    int attack();
    void split();
};

#endif
