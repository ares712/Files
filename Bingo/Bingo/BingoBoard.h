#pragma once
#include "Framework.h"

// 빙고판의 크기와 들어갈 숫자들
class BingoBoard
{
public:
	// 랜덤 숫자
	int randA;
	int randB;

	int inputX;
	int inputY;

	int bingoScore = 0;

	// 빙고판에 들어갈 숫자들
	int bingoBoard[5][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };

	// 빙고판 숫자 섞기
	void BoardMixNumber();
	// 빙고판
	void StartBingo();
};

