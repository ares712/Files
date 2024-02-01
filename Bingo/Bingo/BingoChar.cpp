#include "BingoChar.h"

void BingoChar::BoardMixNumber()
{
    srand(GetTickCount64());

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j) // 0 ~ 25 까지 숫자 생성
        {
            bingoBoard[i][j] = (i * 5 + j) + 1;
        }
    }

    // 빙고판 숫자 섞기
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

        cout << "1 ~ 25 사이의 숫자를 입력해주세요" << endl;
        cout << "점수 : " << bingoScore << endl;

        if (bingoScore >= 3) break;

        cout << "입력 : ";
        cin >> input;

        // 입력값과 빙고의 숫자가 같으면 0
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
                    cout << "잘못 입력하셨습니다." << endl;
                    continue;
                }
                else if (input < 1)
                {
                    cout << "잘못 입력하셨습니다." << endl;
                    continue;
                }
            }
        }

        // 빙고 조건
        for (int i = 0; i < 5; i++)
        {
            if (bingoBoard[i][0] == 0 && // 가로 빙고
                bingoBoard[i][1] == 0 &&
                bingoBoard[i][2] == 0 &&
                bingoBoard[i][3] == 0 &&
                bingoBoard[i][4] == 0)
            {
                bingoScore++;
            }
            else if (bingoBoard[0][i] == 0 && // 세로 빙고
                bingoBoard[1][i] == 0 &&
                bingoBoard[2][i] == 0 &&
                bingoBoard[3][i] == 0 &&
                bingoBoard[4][i] == 0)
            {
                bingoScore++;
            }
            else if (bingoBoard[0][0] == 0 && // 대각선 빙고(왼쪽 위)
                bingoBoard[1][1] == 0 &&
                bingoBoard[2][2] == 0 &&
                bingoBoard[3][3] == 0 &&
                bingoBoard[4][4] == 0)
            {
                bingoScore++;
            }
            else if (bingoBoard[0][4] == 0 && // 대각선 빙고(오른쪽 위)
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