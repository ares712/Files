#pragma once
#include "Framework.h"

// �������� ũ��� �� ���ڵ�
class BingoBoard
{
public:
	// ���� ����
	int randA;
	int randB;

	int inputA;
	int inputB;

	int bingoScore = 0;

	bool playing = true;
	// �����ǿ� �� ���ڵ�
	int bingoboard[5][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };

	// ������
	void BoardMixNumber();

	void StartBingo();
};

