#include "Data.h"

void Data::TBlock()
{
	UINT tBlock[3][2];

	for (int i = 0; i <= 2; ++i)
	{
		for (int j = 0; j <= 3; ++j)
		{
			tBlock[i][j] = bingoAres;
			tBlock[i] = 1;
		}
	}
}

void Data::Board()
{
	for (int y = 0; y < 20; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			map[y][x] = '*';
		}
	}

	for (int y = 0; y < 20; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			cout << map[y][x] << " ";
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

	while (true)
	{
		randNum = rand() % 6; // 0 ~ 6 ·£´ý µ¹¸®±â

		switch (randNum)
		{
		case 0: // I

			break;
		case 1: // O

			break;
		case 2: // T

			break;
		case 3: // L

			break;
		case 4: // J

			break;
		case 5: // Z

			break;
		case 6: // S

			break;

		}
	}
}
