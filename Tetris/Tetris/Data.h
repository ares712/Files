#pragma once
#include "Framework.h"

class Data
{
public:

	UINT bingoAres = 0;
	
	char Block[2][3];
	char map[20][10];
	
	int score;
	int randNum;
	int num;

	// 블럭들
	void IBlock();
	void OBlock();
	void TBlock();
	void JBlock();
	void LBlock();
	void ZBlock();
	void SBlock();

	void Board(); // 맵
	
	void BlockData(); // 블럭 종류

	void BlockRot(); // 블럭 회전

	void Score(); // 점수
	bool Condition = false; // 점수 획득 조건

	void StartTetris();
};

