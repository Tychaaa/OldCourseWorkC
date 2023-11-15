#pragma once
#include <string>

using namespace std;

// Класс для объекта "Персонаж"
class Character {
private:

    string name;    // Имя персонажа
    int health;     // Очки здоровья
    int manapool;   // Количество маны
    int stamina;    // Выносливость
    // Weapon gun   // 

public:

    // Сеттеры
    void setName(string name);
    void setHealth(int health);
    void setManaPool(int mana);
    void setStamina(int stamina);

    // Геттеры
    string getName();
    int getHealth();
    int getManaPool();
    int getStamina();

};
