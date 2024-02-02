#include "BingoChar.h"

void BingoChar::BoardMixNumber()
{
    srand(GetTickCount64());

    // 0 ~ 25 까지 숫자 생성
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
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
    // 생성된 숫자의 위치를 랜덤으로 섞는다
    BoardMixNumber();

    // 빙고판 출력
    while (true)
    {
        system("cls");

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
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                // 가로 빙고 여부

                // 가로 1번째 줄 빙고 여부
                if (!width1)
                {
                    // 1번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[0][0] == 0 &&  // 1칸 검사
                        bingoBoard[0][1] == 0 &&  // 2칸 검사
                        bingoBoard[0][2] == 0 &&  // 3칸 검사
                        bingoBoard[0][3] == 0 &&  // 4칸 검사
                        bingoBoard[0][4] == 0)    // 5칸 검사
                    {
                        bingoScore++;  // 점수 +1
                        width1 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (width1) continue;
                }
                
                // 가로 2번째 줄 빙고 여부
                if (!width2)
                {
                    // 2번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[1][0] == 0 && // 1칸 검사
                        bingoBoard[1][1] == 0 && // 2칸 검사
                        bingoBoard[1][2] == 0 && // 3칸 검사
                        bingoBoard[1][3] == 0 && // 4칸 검사
                        bingoBoard[1][4] == 0)   // 5칸 검사
                    {
                        bingoScore++;   // 점수 +1
                        width2 = true;  // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (width2) continue;
                }

                // 가로 3번째 줄 빙고 여부
                if (!width3)
                {
                    // 3번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[2][0] == 0 && // 1칸 검사
                        bingoBoard[2][1] == 0 && // 2칸 검사
                        bingoBoard[2][2] == 0 && // 3칸 검사
                        bingoBoard[2][3] == 0 && // 4칸 검사
                        bingoBoard[2][4] == 0)   // 5칸 검사
                    {
                        bingoScore++;  // 점수 +1
                        width3 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (width3) continue;
                }

                // 가로 4번째 줄 빙고 여부
                if (!width4)
                {
                    // 4번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[3][0] == 0 && // 1칸 검사
                        bingoBoard[3][1] == 0 && // 2칸 검사
                        bingoBoard[3][2] == 0 && // 3칸 검사
                        bingoBoard[3][3] == 0 && // 4칸 검사
                        bingoBoard[3][4] == 0)   // 5칸 검사
                    {
                        bingoScore++;  // 점수 +1
                        width4 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (width4) continue;
                }

                // 가로 5번째 줄 빙고 여부
                if (!width5)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[4][0] == 0 && // 1칸 검사
                        bingoBoard[4][1] == 0 && // 2칸 검사
                        bingoBoard[4][2] == 0 && // 3칸 검사
                        bingoBoard[4][3] == 0 && // 4칸 검사
                        bingoBoard[4][4] == 0)   // 5칸 검사
                    {
                        bingoScore++;  // 점수 +1
                        width5 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (width5) continue;
                }

                // --------------------------------------------------------------

                // 세로 1번째 줄 빙고 여부
                if (!height1)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[0][0] == 0 && // 1칸 검사
                        bingoBoard[1][0] == 0 && // 2칸 검사
                        bingoBoard[2][0] == 0 && // 3칸 검사
                        bingoBoard[3][0] == 0 && // 4칸 검사
                        bingoBoard[4][0] == 0)   // 5칸 검사
                    {
                        bingoScore++;   // 점수 +1
                        height1 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (height1) continue;
                }

                // 세로 2번째 줄 빙고 여부
                if (!height2)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[0][1] == 0 && // 1칸 검사
                        bingoBoard[1][1] == 0 && // 2칸 검사
                        bingoBoard[2][1] == 0 && // 3칸 검사
                        bingoBoard[3][1] == 0 && // 4칸 검사
                        bingoBoard[4][1] == 0)   // 5칸 검사
                    {
                        bingoScore++;   // 점수 +1
                        height2 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (height2) continue;
                }

                // 세로 3번째 줄 빙고 여부
                if (!height3)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[0][2] == 0 && // 1칸 검사
                        bingoBoard[1][2] == 0 && // 2칸 검사
                        bingoBoard[2][2] == 0 && // 3칸 검사
                        bingoBoard[3][2] == 0 && // 4칸 검사
                        bingoBoard[4][2] == 0)   // 5칸 검사
                    {
                        bingoScore++;   // 점수 +1
                        height3 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (height3) continue;
                }

                // 세로 4번째 줄 빙고 여부
                if (!height4)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[0][3] == 0 && // 1칸 검사
                        bingoBoard[1][3] == 0 && // 2칸 검사
                        bingoBoard[2][3] == 0 && // 3칸 검사
                        bingoBoard[3][3] == 0 && // 4칸 검사
                        bingoBoard[4][3] == 0)   // 5칸 검사
                    {
                        bingoScore++;   // 점수 +1
                        height4 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (height4) continue;
                }

                // 세로 5번째 줄 빙고 여부
                if (!height5)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[0][4] == 0 && // 1칸 검사
                        bingoBoard[1][4] == 0 && // 2칸 검사
                        bingoBoard[2][4] == 0 && // 3칸 검사
                        bingoBoard[3][4] == 0 && // 4칸 검사
                        bingoBoard[4][4] == 0)   // 5칸 검사
                    {
                        bingoScore++;   // 점수 +1
                        height5 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (height5) continue;
                }

                // --------------------------------------------------------------

                // 대각선 빙고 여부 경우의 수 1
                if (!diagnal1)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[0][0] == 0 && // 1칸 검사
                        bingoBoard[1][1] == 0 && // 2칸 검사
                        bingoBoard[2][2] == 0 && // 3칸 검사
                        bingoBoard[3][3] == 0 && // 4칸 검사
                        bingoBoard[4][4] == 0)   // 5칸 검사
                    {
                        bingoScore++;    // 점수 +1
                        diagnal1 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (diagnal1) continue;
                }

                // 대각선 빙고 여부 경우의 수 2
                if (!diagnal2)
                {
                    // 5번째 줄이 빙고가 된게 처음이라는 점수 1점 부여
                    if (bingoBoard[4][4] == 0 && // 1칸 검사
                        bingoBoard[3][3] == 0 && // 2칸 검사
                        bingoBoard[2][2] == 0 && // 3칸 검사
                        bingoBoard[1][1] == 0 && // 4칸 검사
                        bingoBoard[0][0] == 0)   // 5칸 검사
                    {
                        bingoScore++;    // 점수 +1
                        diagnal2 = true; // 점수 중복 부여 방지
                    }

                    // 이미 빙고가 되어있는 상태이고, 점수까지 부여 받았으면 그냥 넘기기
                    else if (diagnal2) continue;
                }
            }
        }
    }
}