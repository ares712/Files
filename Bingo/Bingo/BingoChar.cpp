#include "BingoChar.h"

void BingoChar::BoardMixNumber()
{
    srand(GetTickCount64());

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j) // 0 ~ 25 ���� ���� ����
        {
            bingoBoard[i][j] = (i * 5 + j) + 1;
        }
    }

    // ������ ���� ����
    for (int i = 0; i < 100; ++i)
    {
        randA = rand() % 5;
        randB = rand() % 5;
        int tmp = bingoBoard[randA][randB];
        bingoBoard[randA][randB] = bingoBoard[randB][randA];
        bingoBoard[randB][randA] = tmp;
    }
}

void BingoChar::StartBingo()
{

    BoardMixNumber();

    while (true)
    {
        cout << "==========================" << endl;

        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                cout << bingoBoard[i][j] << " ";
            }
            cout << endl;
        }

        cout << "==========================" << endl;

        cout << "1 ~ 25 ������ ���ڸ� �Է����ּ���" << endl;
        cout << "���� : " << bingoScore << endl;

        if (bingoScore >= 3) break;

        cout << "�Է� : ";
        cin >> input;

        // �Է°��� ������ ���ڰ� ������ 0
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                if (input == bingoBoard[i][j])
                {
                    bingoBoard[i][j] = 0;
                    break;
                }
                else if (input > 25)
                {
                    cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
                    continue;
                }
                else if (input < 1)
                {
                    cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
                    continue;
                }
            }
        }

        // ���� ����
        for (int i = 0; i < 5; i++)
        {
            if (bingoBoard[i][0] == 0 && // ���� ����
                bingoBoard[i][1] == 0 &&
                bingoBoard[i][2] == 0 &&
                bingoBoard[i][3] == 0 &&
                bingoBoard[i][4] == 0)
            {
                bingoScore++;
            }
            else if (bingoBoard[0][i] == 0 && // ���� ����
                bingoBoard[1][i] == 0 &&
                bingoBoard[2][i] == 0 &&
                bingoBoard[3][i] == 0 &&
                bingoBoard[4][i] == 0)
            {
                bingoScore++;
            }
            else if (bingoBoard[0][0] == 0 && // �밢�� ����(���� ��)
                bingoBoard[1][1] == 0 &&
                bingoBoard[2][2] == 0 &&
                bingoBoard[3][3] == 0 &&
                bingoBoard[4][4] == 0)
            {
                bingoScore++;
            }
            else if (bingoBoard[0][4] == 0 && // �밢�� ����(������ ��)
                bingoBoard[1][3] == 0 &&
                bingoBoard[2][2] == 0 &&
                bingoBoard[3][1] == 0 &&
                bingoBoard[4][0])
            {
                bingoScore++;
            }
        }
    }
}