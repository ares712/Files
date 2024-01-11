#pragma once

class Item
{
public:
    int input;

    int randNum;
    int goldRandom; 
    int potion;

    int totalGold = 0; // ÃÑ °ñµå
    int totalPotion = 0; // ÃÑ Æ÷¼Ç °¹¼ö

    void Inventory();

    bool Loop = true; // ¹Ýº¹¿©ºÎ
};