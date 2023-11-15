#include "Character.h"

void Character::setName(string name)
{
    this->name = name;
}

void Character::setHealth(int health)
{
    this->health = health;
}

void Character::setManaPool(int mana)
{
    this->manapool = mana;
}

void Character::setStamina(int stamina)
{
    this->stamina = stamina;
}

string Character::getName()
{
    return name;
}

int Character::getHealth()
{
    return health;
}

int Character::getManaPool()
{
    return manapool;
}

int Character::getStamina()
{
    return stamina;
}
