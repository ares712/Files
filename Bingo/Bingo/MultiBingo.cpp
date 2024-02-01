#include "MultiBingo.h"

void MultiBingo::MixNumber()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			bingoBoard[i][j] = (i * 5 + j) + 1;
		}
	}
	
	for (int i = 0; i < 100; ++i)
	{
		randA = rand() % 5;
		randB = rand() % 5;
		int tmp = bingoBoard[randA][randB];
		bingoBoard[randA][randB] = bingoBoard[randB][randA];
		bingoBoard[randB][randA] = tmp;
	}
}

void MultiBingo::Win()
{
	if (playerScore >= 3) cout << "�÷��̾ �¸��߽��ϴ�." << endl;
	else if (computerScore >= 3) cout << "��ǻ�Ͱ� �¸��߽��ϴ�." << endl;
}

void MultiBingo::StartBingo()
{
	MixNumber();
	Win();

	while (true)
	{
		
	}
}
