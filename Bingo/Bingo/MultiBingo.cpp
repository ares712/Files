#include "MultiBingo.h"

void MultiBingo::MixNumber()
{
	srand(GetTickCount64());

	// �����ǿ� ���� �ֱ� (1 ~ 25)
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			playerBoard[i][j] = (i * 5 + j) + 1;
			computerBoard[i][j] = (i * 5 + j) + 1;
		}
	}
	
	// �����ǿ� �ִ� ���� ����
	// �÷��̾� ������
	for (int i = 0; i < 1000; ++i)
	{
		randA = rand() % 5;
		randB = rand() % 5;
		int tmp = playerBoard[randA][randB];
		playerBoard[randA][randB] = playerBoard[randB][randA];
		playerBoard[randB][randA] = tmp;
	}
	// ��ǻ�� ������
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
	MixNumber(); // ������ ���� ����

	while (true)
	{	
		BingoBoard(); // ������ ���
		BingoTurn(); // ������ �������� ����
		Condition(); // ������ ����

		if (playerScore >= 3 && computerScore >= 3)
		{
			cout << "���º� �Դϴ�." << endl;
			break;
		}
		else if (playerScore >= 3)
		{
			cout << "�÷��̾ �¸��߽��ϴ�." << endl;
			break;
		}
		else if (computerScore >= 3)
		{
			cout << "��ǻ�Ͱ� �¸��߽��ϴ�." << endl;
			break;
		}
	}
}

void MultiBingo::BingoBoard()
{
	// ������ ���
	cout << "��ǻ�� ������" << endl;
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

	cout << "�÷��̾� ������" << endl;
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
	cout << "�÷��̾� ���� : " << playerScore << endl;
	cout << "��ǻ�� ���� : " << computerScore << endl;
}

void MultiBingo::BingoTurn()
{
	if (PlayerTurn) // �÷��̾� ������ ��
	{
		// ���� ���� �Է�
		cout << "�Է� : ";
		cin >> input;

		// �Է� ���� �ߺ�üũ �ϴ� ������ ����
		PlayerCheck[Num1] = input;
		
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				// �Է� ���� ���� ���ڸ� 0���� �ٲ�
				if (input == playerBoard[i][j])
				{
					playerBoard[i][j] = 0;
				}
				else if (input > 25 || input < 1)
				{
					cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
				}

				if (input == computerBoard[i][j])
				{
					computerBoard[i][j] = 0;
				}
			}
		}

		Num1++;
		// ���� �� �� �ѱ��
		PlayerTurn = false;
	}
	else if (!PlayerTurn) // �÷��̾� ���ʰ� �ƴ� ��(��ǻ�� ����)
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
		// �Է� ���� �ߺ�üũ �ϴ� ������ ����
		ComputerCheck[Num2] = selectRandomNum;

		cout << "��ǻ�Ͱ� �� ���� : " << selectRandomNum << endl;

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
		// ���� �� �� �ѱ��
		PlayerTurn = true;
	}
}

void MultiBingo::Condition()
{
	playerScore = 0;
	computerScore = 0;

	for (int i = 0; i < 5; ++i)
	{
		// ���� ����
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

		// ���� ����
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

	// ���� �밢�� ����
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

	// ������ �밢�� ����
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