#pragma once
#include <string>

using namespace std;

// Класс для объекта "Оружие"
class SkillTree
{
private:

    int strengh;        // Очки Силы
    int agility;        // Очки ловкости
    int intelligence;   // Очки интеллекта

public:

    // Конструктор без параметров
    SkillTree();

    // Конструктор с параметрами
    SkillTree(int strengh, int agility, int intelligence);

    // Деструктор
    ~SkillTree();

    // Сеттеры
    void setStrengh(int strengh);
    void setAgility(int agility);
    void setIntelligence(int intelligence);

    // Геттеры
    int getStrengh();
    int getAgility();
    int getIntelligence();

};