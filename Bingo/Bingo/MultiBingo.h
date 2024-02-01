#pragma once
#include "Framework.h"

// 2ÀÎ¿ë ºù°í
class MultiBingo
{
public:

	int bingoNumber[25] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
	int bingoBoard[5][5];

	bool isTurn = true;

	int randA;
	int randB;

	int bingo;

	int playerScore;
	int computerScore;

	void MixNumber();

	void Win();

	void StartBingo();
};

