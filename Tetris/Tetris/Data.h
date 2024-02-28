#pragma once
#include "Framework.h"

class Data
{
public:

	// 블럭들
	int LBlock;
	int JBlock;
	int Zblock;
	int Sblock;
	int IBlock[4][1];
	int OBlock[2][2];
	int TBlock;

	UINT bingoAres = 0;
	void TBlock();

	int score;

	int randNum;

	char map[20][10];

	void Board(); // 맵
	
	void BlockData(); // 블럭 종류

	void BlockRot(); // 블럭 회전

	void Score(); // 점수
	bool Condition = false; // 점수 획득 조건

	void StartTetris();
};

