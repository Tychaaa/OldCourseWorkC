#pragma once
#include "Character.h"

class MainHero : public Character
{
private:

	int armor;                  // Показатель брони
	//Inventory backpack;       // Инвентарь
	//SkillTree skillPoints;    // Очки навыков

public:

	// Сеттеры
	void setArmor(int armor);

	// Геттеры
	int getArmor();
};

