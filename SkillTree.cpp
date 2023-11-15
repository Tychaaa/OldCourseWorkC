#include "SkillTree.h"

SkillTree::SkillTree() : strengh(0), agility(0), intelligence(0) {}

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

const int SkillTree::getStrengh()
{
	return strengh;
}

const int SkillTree::getAgility()
{
	return agility;
}

const int SkillTree::getIntelligence()
{
	return intelligence;
}
