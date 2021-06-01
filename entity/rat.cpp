#include "rat.hpp"

using namespace std;

Rat::Rat() : IEnemy() {}

Rat::Rat(const string &n, int pow, int hp, int lvl, int exp) : IEnemy("Rat", pow, hp, lvl, exp) {}

int Rat::useSkill() {
  cout << "Rat used Hyper Fang!" << endl;
  cout << "It did " << getPower() * getLevel() * 1.5 << "damage!" << endl;
  return getPower() * getLevel() * 1.5;
}

int Rat:: attack() {
  cout << "Rat used Scratch!" << endl;
  cout << "It did " << getPower() * getLevel() << "damage!" << endl;
  return getPower() * getLevel();
}
