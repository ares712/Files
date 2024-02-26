#include "BingoBoard.h"

void BingoBoard::BoardMixNumber()
{
    srand(GetTickCount64());

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

void BingoBoard::StartBingo()
{
    BoardMixNumber(); // ������ ���� ����

    while (true)
    {
        cout << "����� ���� ���� ����ּ���." << endl;
        cout << "========================" << endl;
        // ������ ���
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                cout << bingoBoard[i][j] << " ";
            }
            cout << endl;
        }

        cout << "========================" << endl;

        cout << "���� : " << bingoScore << endl;

        if (bingoScore >= 3) break; // ������ 3�� �̻��� �� ����

        cout << "�Է� : ";
        // x,y�� ���� �Է�
        cin >> inputY >> inputX;
        // �Է¹��� ���� ������ ���� 0���� �ٲ�
        if (bingoBoard[inputY][inputX])
        {
            bingoBoard[inputY][inputX] = 0;
        }

        system("cls");

        bingoScore = 0;

        // ���� ����
        for (int i = 0; i < 5; ++i)
        {
            // ���� ����
            if (bingoBoard[i][0] == 0 &&
                bingoBoard[i][1] == 0 &&
                bingoBoard[i][2] == 0 &&
                bingoBoard[i][3] == 0 &&
                bingoBoard[i][4] == 0)
            {
                bingoScore++;
            }

            // ���� ����
            if (bingoBoard[0][i] == 0 &&
                bingoBoard[1][i] == 0 &&
                bingoBoard[2][i] == 0 &&
                bingoBoard[3][i] == 0 &&
                bingoBoard[4][i] == 0)
            {
                bingoScore++;
            }
        }

        // ���� �밢�� ����
        if (bingoBoard[0][0] == 0 &&
            bingoBoard[1][1] == 0 &&
            bingoBoard[2][2] == 0 &&
            bingoBoard[3][3] == 0 &&
            bingoBoard[4][4] == 0)
        {
            bingoScore++;
        }

        // ������ �밢�� ����
        if (bingoBoard[0][4] == 0 &&
            bingoBoard[1][3] == 0 &&
            bingoBoard[2][2] == 0 &&
            bingoBoard[3][1] == 0 &&
            bingoBoard[4][0] == 0)
        {
            bingoScore++;
        }
    }
}