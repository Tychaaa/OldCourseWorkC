#pragma once
#include "Weapon.h"
#include <string>

using namespace std;

// Класс для объекта "Персонаж"
class Character 
{
private:

    string name;    // Имя персонажа
    int maxHealth;  // Максимальное здоровье
    int health;     // Очки здоровья
    int manapool;   // Количество маны
    int stamina;    // Выносливость
    Weapon gun;     // Экипированное оружие

public:

    // Конструктор без параметров
    Character();

    // Конструктор с параметрами
    Character(string& name, int maxHP, int hp, int mana, int stamina);

    // Деструктор
    ~Character();

    // Сеттеры
    void setName(string name);
    void setMaxHealth(int maxHealth);
    void setHealth(int health);
    void setManaPool(int mana);
    void setStamina(int stamina);

    // Геттеры
    const string getName();
    const int getHealth();
    const int getMaxHealth();
    const int getManaPool();
    const int getStamina();

};
