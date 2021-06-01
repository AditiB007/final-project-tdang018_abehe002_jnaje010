#include "slime.hpp"

using namespace std;

Slime::Slime() : IEnemy() {
  this->number = 0;
}

Slime::Slime(const string &n, int pow, int hp, int lvl, int exp, int num) : IEnemy(n, pow, hp, lvl, exp) {
  this->number = num;
}

int Slime::useSkill() {
  int damage = getPower() * getLevel() * 1.5;
  cout << "Slime used Bounce!" << endl;
  cout << "It did " << damage << " damage!" << endl;
  return damage;
}

int Slime::attack() {
  if(this->slimes.size() == 0) {
    cout << "Slime used Hop!" << endl;
    cout << "It did nothing..." << endl;
  }
  else {
    for(vector<Slime>::iterator it = this->slimes.begin(); it != this->slimes.end(); ++it) {
      cout << "Slime " << it->getNumber() << " used Hop!" << endl;
      cout << "It did nothing..." << endl;
    }
  }
  return 0;
}

int Slime::getNumber() const {
  return this->number;
}

void Slime::split() {
  if(getHealth() > 5) {
    cout << "Wait! The slime split into two!" << endl;
    
    Slime s1("Slime", 1, 5, 1, 0, 1);
    this->slimes.push_back(s1);
    
    Slime s2("Slime", 1, 5, 1, 0, 2);
    this->slimes.push_back(s2);
  }
  else {
    cout << "Slime tried to split, but it failed!" << endl;
  }
}

