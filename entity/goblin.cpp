#include "goblin.hpp"

using namespace std;

Goblin::Goblin() : IEnemy() {
  this->armor = nullptr;
  this->weapon = nullptr;
}

Gobin::Goblin(const string &n, int pow, int hp,
              int lvl, int exp, IArmor* arm, IWeapon* weap)
              : IEnemy(n, pow, hp, lvl, exp) {
  this->armor = arm;
  this->weapon = weap;
}

int Goblin::useSkill() {
  cout << "Goblin used Fury Slash!" << endl;
  cout << "It did " << getPower() * getLevel() * 1.5 << "damage!" << endl;
  return getPower() * getLevel() * 1.5;
}

int Goblin::attack() {
  cout << "Goblin used its " << this->weapon->getName() << " to do Slice!" << endl;
  cout << "It did " << this->weapon->getAttack() << " damage!" << endl;
  return this->weapon->getAttack();
}
