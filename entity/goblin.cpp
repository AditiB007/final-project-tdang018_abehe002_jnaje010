#include "goblin.hpp"

using namespace std;

Goblin::Goblin() : IEnemy() {
  this->armor = nullptr;
  this->weapon = nullptr;
}

Goblin::Goblin(const string &n, int pow, int hp,
              int lvl, int exp, IArmor* arm, IWeapon* weap)
              : IEnemy(n, pow, hp, lvl, exp) {
  this->armor = arm;
  this->weapon = weap;
}

int Goblin::useSkill() {
  int damage = getPower() * getLevel() * 1.5;
  cout << "Goblin used Fury Slash!" << endl;
  cout << "It did " << damage << " damage!" << endl;
  return damage;
}

int Goblin::attack() {
  cout << "Goblin used its " << this->weapon->getName() << " to do Slice!" << endl;
  cout << "It did " << this->weapon->getAttack() << " damage!" << endl;
  return this->weapon->getAttack();
}
