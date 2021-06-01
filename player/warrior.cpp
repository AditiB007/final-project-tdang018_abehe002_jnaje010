#include "warrior.hpp"

using namespace std;

Warrior::Warrior() : IPlayer() {}

Warrior::Warrior(const string &n, int pow, int hp,
     int lvl, int exp) :
     IPlayer(n, pow, hp, lvl, exp) {}

int Warrior::attack() {
  cout << getName() << " used their " << this->weapon->getName() <<
  "to do Sword Rush!" << endl;

  cout << "It did " << this->weapon->getAttack() + getPower() << " damage!" << endl;
  return this->weapon->getAttack() + getPower();
}

int Warrior::useSkill() {
  int damage = getPower() * getLevel() * 1.5;
  cout << getName() << " used Holy Slash" << endl;
  cout << "It did " << damage << "damage!" << endl;
  return damage;
}
