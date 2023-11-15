#include "Character.h"

Character::Character() : name(""), maxHealth(0), health(0), manapool(0), stamina(0) {}

Character::Character(string& name, int maxHP, int hp, int mana, int stamina)
    : name(name), maxHealth(maxHP), health(hp), manapool(mana), stamina(stamina) {}

Character::~Character() {}

void Character::setName(string name)
{
    this->name = name;
}

void Character::setMaxHealth(int maxHealth)
{
    this->maxHealth = maxHealth;
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

const string Character::getName()
{
    return name;
}

const int Character::getHealth()
{
    return health;
}

const int Character::getMaxHealth()
{
    return maxHealth;
}

const int Character::getManaPool()
{
    return manapool;
}

const int Character::getStamina()
{
    return stamina;
}