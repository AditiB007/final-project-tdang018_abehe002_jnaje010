#include "iEntity.hpp"

using namespace std;

//Init
IEntity::IEntity() {
  this->name = "";
  this->power = 0;
  this->health = 0;
  this->level = 0;
  this->experience = 0;
}

IEntity::IEntity(const string &n, int pow, int hp, int lvl, int exp) {
  this->name = n;
  this->power = pow;
  this->health = hp;
  this->level = lvl;
  this->experience = exp;
}

//Accessors
const string & IEntity::getName() const {return this->name;}
int IEntity::getPower() const {return this->power;}
int IEntity::getHealth() const {return this->health;}
int IEntity::getLevel() const {return this->level;}
int IEntity::getExperience() const {return this->experience;}

//Mutators
void IEntity::setName(string n) {this->name = n;}
void IEntity::setPower(int pow) {this->power = pow;}
void IEntity::setHealth(int hp) {this->health = hp;}
void IEntity::setLevel(int lvl) {this->level = lvl;}
void IEntity::setExperience(int exp) {this->experience = exp;}

//Actions
bool IEntity::isAlive() {
  if(getHealth() > 0) {
    return true;
  }
  else {
    return false;
  }
}
void IEntity::levelUp() {
  if(getExperience() > 25) {
    setLevel(getLevel() + 1);
    setHealth(getHealth() + 3);
    setPower(getPower() + 2);
    setExperience(0);
  }
}

