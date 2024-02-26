#pragma once
#include "Framework.h"

// 2�ο� ����
class MultiBingo
{
public:

	int playerBoard[5][5];
	int computerBoard[5][5];

	int PlayerCheck[25];
	int ComputerCheck[25];

	int randA;
	int randB;

	int selectRandomNum; // ��ǻ�Ͱ� �������� ���� ����

	int input;

	int playerScore;
	int computerScore;

	int Num1 = 0;
	int Num2 = 0;

	bool PlayerTurn = true;

	void MixNumber(); // ���� ����

	void StartBingo(); // �������

	void BingoBoard(); // ������ ���

	void BingoTurn(); // ���� ����(�÷��̾���������, ��ǻ����������)

	void Condition(); // ���� ����
};

