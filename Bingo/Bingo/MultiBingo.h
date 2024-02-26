#pragma once
#include "Framework.h"

// 2인용 빙고
class MultiBingo
{
public:

	int playerBoard[5][5];
	int computerBoard[5][5];

	int PlayerCheck[25];
	int ComputerCheck[25];

	int randA;
	int randB;

	int selectRandomNum; // 컴퓨터가 랜덤으로 지울 숫자

	int input;

	int playerScore;
	int computerScore;

	int Num1 = 0;
	int Num2 = 0;

	bool PlayerTurn = true;

	void MixNumber(); // 숫자 섞기

	void StartBingo(); // 빙고시작

	void BingoBoard(); // 빙고판 출력

	void BingoTurn(); // 빙고 차례(플레이어차례인지, 컴퓨터차례인지)

	void Condition(); // 빙고 조건
};

