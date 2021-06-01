#ifndef __IENTITY_HPP__
#define __IENTITY_HPP__

#include <string>
#include <iostream>

using namespace std;

class IEntity {
  private:
    string name;
    int power;
    int health;
    int level;
    int experience;

  public:
    //Init
    IEntity();
    IEntity(const string &n, int pow, int hp, int lvl, int exp);

    //Accessors
    const string & getName() const;
    int getPower() const;
    int getHealth() const;
    int getLevel() const;
    int getExperience() const;
    int getCap() const;

    //Mutators
    void setName(string n);
    void setPower(int pow);
    void setHealth(int hp);
    void setExperience(int exp);
    void setLevel(int lvl);

    //Actions
    bool isAlive();
    void levelUp();
    virtual int useSkill() = 0;
    virtual int attack() = 0;
};

#endif
