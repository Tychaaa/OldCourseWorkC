#pragma once
#include "Weapon.h"
#include <string>

using namespace std;

// ����� ��� ������� "��������"
class Character 
{
private:

    string name;    // ��� ���������
    int maxHealth;  // ������������ ��������
    int health;     // ���� ��������
    int manapool;   // ���������� ����
    int stamina;    // ������������
    Weapon gun;     // ������������� ������

public:

    // ����������� ��� ����������
    Character();

    // ����������� � �����������
    Character(string& name, int maxHP, int hp, int mana, int stamina);

    // ����������
    ~Character();

    // �������
    void setName(string name);
    void setMaxHealth(int maxHealth);
    void setHealth(int health);
    void setManaPool(int mana);
    void setStamina(int stamina);

    // �������
    const string getName();
    const int getHealth();
    const int getMaxHealth();
    const int getManaPool();
    const int getStamina();

};
