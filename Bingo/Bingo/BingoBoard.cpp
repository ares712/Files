#include "BingoBoard.h"

void BingoBoard::BoardMixNumber()
{
    srand(GetTickCount64());

    // ������ ���� ����
    for (int i = 0; i < 100; ++i)
    {
        randA = rand() % 5;
        randB = rand() % 5;
        int tmp = bingoboard[randA][randB];
        bingoboard[randA][randB] = bingoboard[randB][randA];
        bingoboard[randB][randA] = tmp;
    }
}

void BingoBoard::StartBingo()
{
    BoardMixNumber(); // ������ ���� ����

    cout << "����� ���� ���� ����ּ���." << endl;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << bingoboard[i][j] << " ";
        }
        cout << endl;
    }

    while (playing)
    {
        cout << "�Է� : ";
        cin >> inputA >> inputB;
        cout << endl;

        if (bingoboard[inputA][inputB])
        {
            bingoboard[inputA][inputB] = 0;
        }

        cout << "========================" << endl;

        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                cout << bingoboard[i][j] << " ";
            }
            cout << endl;
        }

        cout << "========================" << endl;


        // �������� 3���� ����
        if (bingoScore >= 3)
        {
            playing = false;
        }

        cout << "���� : " << bingoScore << endl;

        // ���� ����
        for (int i = 0; i < 5; ++i)
        {
            if (bingoboard[i][0] == 0 && // ���� ����
                bingoboard[i][1] == 0 &&
                bingoboard[i][2] == 0 &&
                bingoboard[i][3] == 0 &&
                bingoboard[i][4] == 0)
            {
                bingoScore++;
            }
            else if (bingoboard[0][i] == 0 && // ���� ����
                bingoboard[1][i] == 0 &&
                bingoboard[2][i] == 0 &&
                bingoboard[3][i] == 0 &&
                bingoboard[4][i] == 0)
            {
                bingoScore++;
            }
            else if (bingoboard[0][0] == 0 && // �밢�� ����(���� ��)
                bingoboard[1][1] == 0 &&
                bingoboard[2][2] == 0 &&
                bingoboard[3][3] == 0 &&
                bingoboard[4][4] == 0)
            {
                bingoScore++;
            }
            else if (bingoboard[0][4] == 0 && // �밢�� ����(������ ��)
                bingoboard[1][3] == 0 &&
                bingoboard[2][2] == 0 &&
                bingoboard[3][1] == 0 &&
                bingoboard[4][0])
            {
                bingoScore++;
            }
        }
    }
}