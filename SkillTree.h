#pragma once
#include <string>

using namespace std;

// ����� ��� ������� "������"
class SkillTree
{
private:

    int strengh;        // ���� ����
    int agility;        // ���� ��������
    int intelligence;   // ���� ����������

public:

    // ����������� ��� ����������
    SkillTree();

    // ����������� � �����������
    SkillTree(int strengh, int agility, int intelligence);

    // ����������
    ~SkillTree();

    // �������
    void setStrengh(int strengh);
    void setAgility(int agility);
    void setIntelligence(int intelligence);

    // �������
    const int getStrengh();
    const int getAgility();
    const int getIntelligence();

};