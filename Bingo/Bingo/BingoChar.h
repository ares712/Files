#pragma once
#include "Framework.h"

class BingoChar
{
public:
	int randA;
	int randB;

	// ���ڸ� �Է¹��� ����
	int input;

	// ������ ���� ����
	bool width1 = false;
	bool width2 = false;
	bool width3 = false;
	bool width4 = false;
	bool width5 = false;

	// ������ ���� ����
	bool height1 = false;
	bool height2 = false;
	bool height3 = false;
	bool height4 = false;
	bool height5 = false;

	// �밢�� ���� ����
	bool diagnal1 = false;
	bool diagnal2 = false;

	int bingoScore = 0;

	// �����ǿ� �� ���ڵ�
	int bingoNumber[25] = { 
		1, 2, 3, 4, 5, 
		6, 7, 8, 9, 10, 
		11, 12, 13, 14, 15, 
		16, 17, 18, 19, 20, 
		21, 22, 23, 24, 25 };

	int bingoBoard[5][5];

	void BoardMixNumber();

	void StartBingo();
};

