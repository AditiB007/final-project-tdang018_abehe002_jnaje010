#include "mage.hpp"

using namespace std;

Mage::Mage() : IPlayer() {}

Mage::Mage(const string &n, int pow, int hp,
     int lvl, int exp) :
     IPlayer(n, pow, hp, lvl, exp) {}

int Mage::attack() {
  cout << getName() << " used their " << this->weapon->getName() <<
  "to do Staff Club!" << endl;

  cout << "It did " << this->weapon->getAttack() + getPower() << " damage!" << endl;
  return this->weapon->getAttack() + getPower();
}

int Mage::useSkill() {
  int damage = getPower() * getLevel() * 1.5;
  cout << getName() << " used Fireball!" << endl;
  cout << "It did " << damage << " damage!" << endl;
  return damage;
}

