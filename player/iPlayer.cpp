#include "iPlayer.hpp"

using namespace std;

IPlayer::IPlayer() : IEntity () {
  this->armor = nullptr;
  this->weapon = nullptr;
  this->factory = nullptr;
}

IPlayer::IPlayer(const string &n, int pow, int hp,
                 int lvl, int exp, IArmor* arm, IWeapon* weap, IEquipFactory* fac)
                 : IEntity(n, pow, hp, lvl, exp) {
  this->armor = arm;
  this->weapon = weap;
  this->factory = fac;
}

void IPlayer::run() {
  cout << "You got away safely..." << endl;
}

void IPlayer::equipArmor(IArmor* arm) {
  if(this->armor) {
    delete this->armor;
  }
  this->armor = arm;
}

void IPlayer::equipWeapon(IWeapon* weap) {
  if(this->weapon) {
    delete this->weapon;
  }
  this->weapon = weap;
}
