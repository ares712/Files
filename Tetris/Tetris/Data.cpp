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
				i == 2 && j == 1) // i�� 2�� ���� j�� 3�϶��� *�� ���� �ִ´�
			{
				Block[i][j] = '0';
				cout << Block[i][j];
			}
			else if (i == 2 && j == 0 ||
				i == 2 && j == 2)// �� ���� ��� ���ǿ����� ��� 0�̶�� �������� �ִ´�
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

// ��Ʈ���� ��� L
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
		// randNum = rand() % 6; // 0 ~ 6 ���� ������
		num = 6;

		switch (num)
		{
		case 0: // I ���
			IBlock();
			break;

		case 1: // O ���
			OBlock();
			break;

		case 2: // T ���
			TBlock();
			break;

		case 3: // J ���
			JBlock();
			break;

		case 4: // L ���
			LBlock();
			break;

		case 5: // Z ���
			ZBlock();
			break;

		case 6: // S ���
			SBlock();
			break;
		}
	}
}