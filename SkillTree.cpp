#include "SkillTree.h"

SkillTree::SkillTree() : strengh(0), agility(0), intelligence(0) {}

// Контруктор с параметрами
SkillTree::SkillTree(int strengh, int agility, int intelligence)
	: strengh(strengh), agility(agility), intelligence(intelligence) {}

SkillTree::~SkillTree() {}

void SkillTree::setStrengh(int strengh)
{
	this->strengh = strengh;
}

void SkillTree::setAgility(int agility)
{
	this->agility = agility;
}

void SkillTree::setIntelligence(int intelligence)
{
	this->intelligence = intelligence;
}

int SkillTree::getStrengh()
{
	return strengh;
}

int SkillTree::getAgility()
{
	return agility;
}

int SkillTree::getIntelligence()
{
	return intelligence;
}
