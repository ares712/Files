#include "BingoChar.h"

void BingoChar::BoardMixNumber()
{
    srand(GetTickCount64());

    // 0 ~ 25 ���� ���� ����
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
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
    // ������ ������ ��ġ�� �������� ���´�
    BoardMixNumber();

    // ������ ���
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
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                // ���� ���� ����

                // ���� 1��° �� ���� ����
                if (!width1)
                {
                    // 1��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[0][0] == 0 &&  // 1ĭ �˻�
                        bingoBoard[0][1] == 0 &&  // 2ĭ �˻�
                        bingoBoard[0][2] == 0 &&  // 3ĭ �˻�
                        bingoBoard[0][3] == 0 &&  // 4ĭ �˻�
                        bingoBoard[0][4] == 0)    // 5ĭ �˻�
                    {
                        bingoScore++;  // ���� +1
                        width1 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (width1) continue;
                }
                
                // ���� 2��° �� ���� ����
                if (!width2)
                {
                    // 2��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[1][0] == 0 && // 1ĭ �˻�
                        bingoBoard[1][1] == 0 && // 2ĭ �˻�
                        bingoBoard[1][2] == 0 && // 3ĭ �˻�
                        bingoBoard[1][3] == 0 && // 4ĭ �˻�
                        bingoBoard[1][4] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;   // ���� +1
                        width2 = true;  // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (width2) continue;
                }

                // ���� 3��° �� ���� ����
                if (!width3)
                {
                    // 3��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[2][0] == 0 && // 1ĭ �˻�
                        bingoBoard[2][1] == 0 && // 2ĭ �˻�
                        bingoBoard[2][2] == 0 && // 3ĭ �˻�
                        bingoBoard[2][3] == 0 && // 4ĭ �˻�
                        bingoBoard[2][4] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;  // ���� +1
                        width3 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (width3) continue;
                }

                // ���� 4��° �� ���� ����
                if (!width4)
                {
                    // 4��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[3][0] == 0 && // 1ĭ �˻�
                        bingoBoard[3][1] == 0 && // 2ĭ �˻�
                        bingoBoard[3][2] == 0 && // 3ĭ �˻�
                        bingoBoard[3][3] == 0 && // 4ĭ �˻�
                        bingoBoard[3][4] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;  // ���� +1
                        width4 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (width4) continue;
                }

                // ���� 5��° �� ���� ����
                if (!width5)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[4][0] == 0 && // 1ĭ �˻�
                        bingoBoard[4][1] == 0 && // 2ĭ �˻�
                        bingoBoard[4][2] == 0 && // 3ĭ �˻�
                        bingoBoard[4][3] == 0 && // 4ĭ �˻�
                        bingoBoard[4][4] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;  // ���� +1
                        width5 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (width5) continue;
                }

                // --------------------------------------------------------------

                // ���� 1��° �� ���� ����
                if (!height1)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[0][0] == 0 && // 1ĭ �˻�
                        bingoBoard[1][0] == 0 && // 2ĭ �˻�
                        bingoBoard[2][0] == 0 && // 3ĭ �˻�
                        bingoBoard[3][0] == 0 && // 4ĭ �˻�
                        bingoBoard[4][0] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;   // ���� +1
                        height1 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (height1) continue;
                }

                // ���� 2��° �� ���� ����
                if (!height2)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[0][1] == 0 && // 1ĭ �˻�
                        bingoBoard[1][1] == 0 && // 2ĭ �˻�
                        bingoBoard[2][1] == 0 && // 3ĭ �˻�
                        bingoBoard[3][1] == 0 && // 4ĭ �˻�
                        bingoBoard[4][1] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;   // ���� +1
                        height2 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (height2) continue;
                }

                // ���� 3��° �� ���� ����
                if (!height3)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[0][2] == 0 && // 1ĭ �˻�
                        bingoBoard[1][2] == 0 && // 2ĭ �˻�
                        bingoBoard[2][2] == 0 && // 3ĭ �˻�
                        bingoBoard[3][2] == 0 && // 4ĭ �˻�
                        bingoBoard[4][2] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;   // ���� +1
                        height3 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (height3) continue;
                }

                // ���� 4��° �� ���� ����
                if (!height4)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[0][3] == 0 && // 1ĭ �˻�
                        bingoBoard[1][3] == 0 && // 2ĭ �˻�
                        bingoBoard[2][3] == 0 && // 3ĭ �˻�
                        bingoBoard[3][3] == 0 && // 4ĭ �˻�
                        bingoBoard[4][3] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;   // ���� +1
                        height4 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (height4) continue;
                }

                // ���� 5��° �� ���� ����
                if (!height5)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[0][4] == 0 && // 1ĭ �˻�
                        bingoBoard[1][4] == 0 && // 2ĭ �˻�
                        bingoBoard[2][4] == 0 && // 3ĭ �˻�
                        bingoBoard[3][4] == 0 && // 4ĭ �˻�
                        bingoBoard[4][4] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;   // ���� +1
                        height5 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (height5) continue;
                }

                // --------------------------------------------------------------

                // �밢�� ���� ���� ����� �� 1
                if (!diagnal1)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[0][0] == 0 && // 1ĭ �˻�
                        bingoBoard[1][1] == 0 && // 2ĭ �˻�
                        bingoBoard[2][2] == 0 && // 3ĭ �˻�
                        bingoBoard[3][3] == 0 && // 4ĭ �˻�
                        bingoBoard[4][4] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;    // ���� +1
                        diagnal1 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (diagnal1) continue;
                }

                // �밢�� ���� ���� ����� �� 2
                if (!diagnal2)
                {
                    // 5��° ���� ���� �Ȱ� ó���̶�� ���� 1�� �ο�
                    if (bingoBoard[4][4] == 0 && // 1ĭ �˻�
                        bingoBoard[3][3] == 0 && // 2ĭ �˻�
                        bingoBoard[2][2] == 0 && // 3ĭ �˻�
                        bingoBoard[1][1] == 0 && // 4ĭ �˻�
                        bingoBoard[0][0] == 0)   // 5ĭ �˻�
                    {
                        bingoScore++;    // ���� +1
                        diagnal2 = true; // ���� �ߺ� �ο� ����
                    }

                    // �̹� ���� �Ǿ��ִ� �����̰�, �������� �ο� �޾����� �׳� �ѱ��
                    else if (diagnal2) continue;
                }
            }
        }
    }
}