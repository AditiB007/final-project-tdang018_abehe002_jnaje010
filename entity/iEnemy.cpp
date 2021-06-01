#include "iEnemy.hpp"

using namespace std;

IEnemy::IEnemy() : IEntity() {}
IEnemy::IEnemy(const string &n, int pow, int hp, int lvl, int exp) : IEntity(n, pow, hp, lvl, exp) {}

