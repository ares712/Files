#pragma once
#include "Framework.h"

class BingoChar
{
public:
	int randA;
	int randB;

	int input;

	bool isBingo = true;

	int bingoScore = 0;

	// 빙고판
	int bingoBoard[5][5];
	// 빙고판에 들어갈 숫자만들고 섞기
	void BoardMixNumber();

	// 빙고 시작
	void StartBingo();
};