#include "MultiBingo.h"

void MultiBingo::MixNumber()
{
	srand(GetTickCount64());

	// 빙고판에 숫자 넣기 (1 ~ 25)
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			playerBoard[i][j] = (i * 5 + j) + 1;
			computerBoard[i][j] = (i * 5 + j) + 1;
		}
	}
	
	// 빙고판에 있는 숫자 섞기
	// 플레이어 빙고판
	for (int i = 0; i < 1000; ++i)
	{
		randA = rand() % 5;
		randB = rand() % 5;
		int tmp = playerBoard[randA][randB];
		playerBoard[randA][randB] = playerBoard[randB][randA];
		playerBoard[randB][randA] = tmp;
	}
	// 컴퓨터 빙고판
	for (int i = 0; i < 1000; i++)
	{
		randA = rand() % 5;
		randB = rand() % 5;
		int tmp = computerBoard[randA][randB];
		computerBoard[randA][randB] = computerBoard[randB][randA];
		computerBoard[randB][randA] = tmp;
	}
}

void MultiBingo::StartBingo()
{
	MixNumber(); // 빙고판 숫자 섞기

	while (true)
	{	
		BingoBoard(); // 빙고판 출력
		BingoTurn(); // 누구의 차례인지 구분
		Condition(); // 빙고의 조건

		if (playerScore >= 3 && computerScore >= 3)
		{
			cout << "무승부 입니다." << endl;
			break;
		}
		else if (playerScore >= 3)
		{
			cout << "플레이어가 승리했습니다." << endl;
			break;
		}
		else if (computerScore >= 3)
		{
			cout << "컴퓨터가 승리했습니다." << endl;
			break;
		}
	}
}

void MultiBingo::BingoBoard()
{
	// 빙고판 출력
	cout << "컴퓨터 빙고판" << endl;
	cout << "==========================" << endl;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << computerBoard[i][j] << " ";
		}
		cout << endl;
	}

	cout << "==========================" << endl;

	cout << endl;

	cout << "플레이어 빙고판" << endl;
	cout << "==========================" << endl;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << playerBoard[i][j] << " ";
		}
		cout << endl;
	}

	cout << "==========================" << endl;
	cout << "플레이어 점수 : " << playerScore << endl;
	cout << "컴퓨터 점수 : " << computerScore << endl;
}

void MultiBingo::BingoTurn()
{
	if (PlayerTurn) // 플레이어 차례일 때
	{
		// 지울 숫자 입력
		cout << "입력 : ";
		cin >> input;

		// 입력 값을 중복체크 하는 곳에도 저장
		PlayerCheck[Num1] = input;
		
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				// 입력 값과 같은 숫자를 0으로 바꿈
				if (input == playerBoard[i][j])
				{
					playerBoard[i][j] = 0;
				}
				else if (input > 25 || input < 1)
				{
					cout << "잘못 입력하셨습니다." << endl;
				}

				if (input == computerBoard[i][j])
				{
					computerBoard[i][j] = 0;
				}
			}
		}

		Num1++;
		// 연산 후 턴 넘기기
		PlayerTurn = false;
	}
	else if (!PlayerTurn) // 플레이어 차례가 아닐 때(컴퓨터 차례)
	{
		Sleep(2000);

		selectRandomNum = rand() % 25 + 1;

		for (int i = 0; i < 25; ++i)
		{
			
			if (selectRandomNum == ComputerCheck[i])
			{
				selectRandomNum = rand() % 25 + 1;
			}

			if (selectRandomNum == PlayerCheck[i])
			{
				selectRandomNum = rand() % 25 + 1;
			}
		}
		// 입력 값을 중복체크 하는 곳에도 저장
		ComputerCheck[Num2] = selectRandomNum;

		cout << "컴퓨터가 낸 숫자 : " << selectRandomNum << endl;

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (selectRandomNum == computerBoard[i][j])
				{
					computerBoard[i][j] = 0;
				}
				if (selectRandomNum == playerBoard[i][j])
				{
					playerBoard[i][j] = 0;
				}
			}
		}

		Num2++;
		// 연산 후 턴 넘기기
		PlayerTurn = true;
	}
}

void MultiBingo::Condition()
{
	playerScore = 0;
	computerScore = 0;

	for (int i = 0; i < 5; ++i)
	{
		// 가로 빙고
		if (playerBoard[i][0] == 0 &&
			playerBoard[i][1] == 0 &&
			playerBoard[i][2] == 0 &&
			playerBoard[i][3] == 0 &&
			playerBoard[i][4] == 0)
		{
			playerScore++;
		}

		if (computerBoard[i][0] == 0 &&
			computerBoard[i][1] == 0 &&
			computerBoard[i][2] == 0 &&
			computerBoard[i][3] == 0 &&
			computerBoard[i][4] == 0)
		{
			computerScore++;
		}

		// 세로 빙고
		if (playerBoard[0][i] == 0 &&
			playerBoard[1][i] == 0 &&
			playerBoard[2][i] == 0 &&
			playerBoard[3][i] == 0 &&
			playerBoard[4][i] == 0)
		{
			playerScore++;
		}

		if (computerBoard[0][i] == 0 &&
			computerBoard[1][i] == 0 &&
			computerBoard[2][i] == 0 &&
			computerBoard[3][i] == 0 &&
			computerBoard[4][i] == 0)
		{
			computerScore++;
		}
	}

	// 왼쪽 대각선 빙고
	if (playerBoard[0][0] == 0 &&
		playerBoard[1][1] == 0 &&
		playerBoard[2][2] == 0 &&
		playerBoard[3][3] == 0 &&
		playerBoard[4][4] == 0)
	{
		playerScore++;
	}

	if (computerBoard[0][0] == 0 &&
		computerBoard[1][1] == 0 &&
		computerBoard[2][2] == 0 &&
		computerBoard[3][3] == 0 &&
		computerBoard[4][4] == 0)
	{
		computerScore++;
	}

	// 오른쪽 대각선 빙고
	if (playerBoard[0][4] == 0 &&
		playerBoard[1][3] == 0 &&
		playerBoard[2][2] == 0 &&
		playerBoard[3][1] == 0 &&
		playerBoard[4][0] == 0)
	{
		playerScore++;
	}

	if (computerBoard[0][4] == 0 &&
		computerBoard[1][3] == 0 &&
		computerBoard[2][2] == 0 &&
		computerBoard[3][1] == 0 &&
		computerBoard[4][0] == 0)
	{
		computerScore++;
	}
}