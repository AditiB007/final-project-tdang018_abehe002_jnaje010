#include "warrior.hpp"

using namespace std;

Warrior::Warrior() : IPlayer() {}

Warrior::Warrior(const string &n, int pow, int hp,
     int lvl, int exp, IArmor* arm, IWeapon* weap, IEquipFactory* fac) :
     IPlayer("Warrior", n, pow, hp, lvl, exp, arm, weap) {}

int Warrior::attack() {
  cout << getName() << " used their " << this->weapon->getName() <<
  "to do Sword Rush!" << endl;

  cout << "It did " << this->weapon->getAttack() + getPower() << " damage!" << endl;
  return this->weapon->getAttack() + getPower();
}

int Warrior::useSkill() {
  cout << getName() << " used Holy Slash" << endl;
  cout << "It did " << getPower() * getLevel() * 1.5 << "damage!" << endl;
  return getPower() * getLevel() * 1.5;
}
