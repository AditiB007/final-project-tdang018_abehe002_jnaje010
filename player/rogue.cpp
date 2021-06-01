#include "rogue.hpp"

using namespace std;

Rogue::Rogue() : IPlayer() {}

Rogue::Rogue(const string &n, int pow, int hp,
            int lvl, int exp, IArmor* arm, IWeapon* weap, IEquipFactory* fac) :
            IPlayer("Rogue", n, pow, hp, lvl, exp, arm, weap) {}

int Rogue::attack() {
  cout << getName() << " used their " << this->weapon->getName() <<
  "to do Slick Throw!" << endl;

  cout << "It did " << this->weapon->getAttack() + getPower() << " damage!" << endl;
  return this->weapon->getAttack() + getPower();
}

int Rogue::useSkill() {
  int damage = getPower() * getLevel() * 1.5;
  cout << getName() << " used Quickdraw!" << endl;
  cout << "It did " << damage << " damage!" << endl;
  return damage;
}

