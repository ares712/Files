#pragma once
#include "Framework.h"

class Data
{
public:

	// ����
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

	void Board(); // ��
	
	void BlockData(); // �� ����

	void BlockRot(); // �� ȸ��

	void Score(); // ����
	bool Condition = false; // ���� ȹ�� ����

	void StartTetris();
};

