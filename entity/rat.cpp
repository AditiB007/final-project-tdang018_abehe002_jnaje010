#include "rat.hpp"

using namespace std;

Rat::Rat() : IEnemy() {}

Rat::Rat(const string &n, int pow, int hp, int lvl, int exp) : IEnemy(n, pow, hp, lvl, exp) {}

int Rat::useSkill() {
  int damage = getPower() * getLevel() * 1.5;
  cout << "Rat used Hyper Fang!" << endl;
  cout << "It did " << damage  << " damage!" << endl;
  return damage;
}

int Rat:: attack() {
  int damage = getPower() * getLevel();
  cout << "Rat used Scratch!" << endl;
  cout << "It did " << damage << " damage!" << endl;
  return damage;
}
