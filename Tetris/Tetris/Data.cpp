#include "Data.h"

void Data::IBlock()
{
	for (int j = 0; j < 4; ++j)
	{
		Block[0][j] = '0';
		cout << Block[0][j] << endl;
	}
}

void Data::OBlock()
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			Block[i][j] = '0';
			cout << Block[i][j];
		}
		cout << endl;
	}
}

void Data::TBlock()
{
	for (int i = 1; i <= 2; ++i)
	{
		for (int j = 0; j <= 3; ++j)
		{
			if (i == 1 && j == 0 ||
				i == 1 && j == 1 ||
				i == 1 && j == 2 ||
				i == 2 && j == 1) // i가 2일 때와 j가 3일때는 *로 값을 넣는다
			{
				Block[i][j] = '0';
				cout << Block[i][j];
			}
			else if (i == 2 && j == 0 ||
				i == 2 && j == 2)// 그 외의 모든 조건에서는 모두 0이라는 정수값을 넣는다
			{
				Block[i][j] = '*';
				cout << Block[i][j];
			}
		}
		cout << endl;
	}
}

void Data::JBlock()
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (i == 0 && j == 0 ||
				i == 1 && j == 0)
			{
				Block[i][j] = '*';
				cout << Block[i][j];
			}
			else if (i == 0 && j == 1 ||
				i == 1 && j == 1 ||
				i == 2 && j == 0 ||
				i == 2 && j == 1)
			{
				Block[i][j] = '0';
				cout << Block[i][j];
			}
		}
		cout << endl;
	}
}

// 테트리스 블록 L
void Data::LBlock()
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (i == 0 && j == 1 ||
				i == 1 && j == 1)
			{
				Block[i][j] = '*';
				cout << Block[i][j];
			}
			else
			{
				Block[i][j] = '0';
				cout << Block[i][j];
			}
		}
		cout << endl;
	}
}

void Data::ZBlock()
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (i == 0 && j == 0 ||
				i == 0 && j == 1 ||
				i == 1 && j == 1 ||
				i == 1 && j == 2)
			{
				Block[i][j] = '0';
				cout << Block[i][j];
			}
			else if (i == 0 && j == 2 ||
				     i == 1 && j == 0)
			{
				Block[i][j] = '*';
				cout << Block[i][j];
			}
		}
		cout << endl;
	}
}

void Data::SBlock()
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (i == 0 && j == 0 ||
				i == 1 && j == 2)
			{
				Block[i][j] = '*';
				cout << Block[i][j];
			}
			else
			{
				Block[i][j] = '0';
				cout << Block[i][j];
			}
		}
		cout << endl;
	}
}

void Data::Board()
{
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			map[i][j] = '*';
		}
	}

	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}

void Data::BlockData()
{
	
}

void Data::Score()
{

}

void Data::StartTetris()
{
	srand(GetTickCount64());
	Board();

	while (true)
	{
		// randNum = rand() % 6; // 0 ~ 6 랜덤 돌리기
		num = 6;

		switch (num)
		{
		case 0: // I 블록
			IBlock();
			break;

		case 1: // O 블록
			OBlock();
			break;

		case 2: // T 블록
			TBlock();
			break;

		case 3: // J 블록
			JBlock();
			break;

		case 4: // L 블록
			LBlock();
			break;

		case 5: // Z 블록
			ZBlock();
			break;

		case 6: // S 블록
			SBlock();
			break;
		}
	}
}