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

	// ������
	int bingoBoard[5][5];
	// �����ǿ� �� ���ڸ���� ����
	void BoardMixNumber();

	// ���� ����
	void StartBingo();
};