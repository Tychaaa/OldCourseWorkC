#pragma once
#include <string>

using namespace std;

// ����� ��� ������� "��������"
class Character {
private:

    string name;    // ��� ���������
    int health;     // ���� ��������
    int manapool;   // ���������� ����
    int stamina;    // ������������
    // Weapon gun   // 

public:

    // �������
    void setName(string name);
    void setHealth(int health);
    void setManaPool(int mana);
    void setStamina(int stamina);

    // �������
    string getName();
    int getHealth();
    int getManaPool();
    int getStamina();

};
