#pragma once

class Item
{
public:
    int input;

    int randNum;
    int goldRandom; 
    int potion;

    int totalGold = 0; // �� ���
    int totalPotion = 0; // �� ���� ����

    void Inventory();

    bool Loop = true; // �ݺ�����
};