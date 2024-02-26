#include "BingoBoard.h"

void BingoBoard::BoardMixNumber()
{
    srand(GetTickCount64());

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

void BingoBoard::StartBingo()
{
    BoardMixNumber(); // 빙고판 숫자 섞기

    while (true)
    {
        cout << "지우고 싶은 곳을 골라주세요." << endl;
        cout << "========================" << endl;
        // 빙고판 출력
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                cout << bingoBoard[i][j] << " ";
            }
            cout << endl;
        }

        cout << "========================" << endl;

        cout << "점수 : " << bingoScore << endl;

        if (bingoScore >= 3) break; // 점수가 3점 이상일 때 종료

        cout << "입력 : ";
        // x,y의 값을 입력
        cin >> inputY >> inputX;
        // 입력받은 값과 동일한 곳에 0으로 바꿈
        if (bingoBoard[inputY][inputX])
        {
            bingoBoard[inputY][inputX] = 0;
        }

        system("cls");

        bingoScore = 0;

        // 빙고 조건
        for (int i = 0; i < 5; ++i)
        {
            // 가로 빙고
            if (bingoBoard[i][0] == 0 &&
                bingoBoard[i][1] == 0 &&
                bingoBoard[i][2] == 0 &&
                bingoBoard[i][3] == 0 &&
                bingoBoard[i][4] == 0)
            {
                bingoScore++;
            }

            // 세로 빙고
            if (bingoBoard[0][i] == 0 &&
                bingoBoard[1][i] == 0 &&
                bingoBoard[2][i] == 0 &&
                bingoBoard[3][i] == 0 &&
                bingoBoard[4][i] == 0)
            {
                bingoScore++;
            }
        }

        // 왼쪽 대각선 빙고
        if (bingoBoard[0][0] == 0 &&
            bingoBoard[1][1] == 0 &&
            bingoBoard[2][2] == 0 &&
            bingoBoard[3][3] == 0 &&
            bingoBoard[4][4] == 0)
        {
            bingoScore++;
        }

        // 오른쪽 대각선 빙고
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