#pragma once
#include "Character.h"

class MainHero : public Character
{
private:

	int armor;                  // ���������� �����
	//Inventory backpack;       // ���������
	//SkillTree skillPoints;    // ���� �������

public:

	// �������
	void setArmor(int armor);

	// �������
	int getArmor();
};

