#include "Framework.h"

void Item::Inventory()
{
    srand(GetTickCount64());
    
    // ���� �����
    vector<int> inven;
    vector<int>::iterator it = inven.begin();
    
    // ���� ũ�� ����
    inven.resize(2);

    it = inven.begin();

    while (Loop)
    {
        cout << "���� �ൿ�� ����ּ���." << endl;
        cout << "[1] ������ ȹ�� [2] �κ��丮 Ȯ�� [3] ����" << endl;
        cin >> input;

        randNum = rand() % 2; // 0 or 1 ���� ����
        goldRandom = rand() % 100 + 1; // 1 ~ 100 ����

        switch (input)
        {
        case 1:
            // ��� Ȥ�� ������ �������� ȹ���Ѵ� (0�̸� ��带, 1�̸� ������ ȹ��)
            if (randNum == 0)
            {
                // ��带 ȹ���ϸ� 1~100������ ��带 �������� ȹ���Ѵ�
                cout << goldRandom << "Gold�� ȹ���߽��ϴ�." << endl;

                totalGold += goldRandom; // �� ��忡 ȹ���� ��� ����
            }
            else if (randNum == 1)
            {
                potion++; // ������ �ϳ��� ȹ��
                cout << "������ ȹ���߽��ϴ�." << endl;
            }
            break;
        case 2:
            it = inven.begin(); // inv1���� �� ó������ �̵� (�ݺ��� ������)
            inven.insert(it, totalGold); // ������ ù ��° ���ҿ� �� ��� ����
            cout << "inven.front() : " << inven.front() << endl; // ���

            it = inven.begin(); // inv1���� �� ó������ �̵� (�ݺ��� ������)
            inven.insert(it++, potion); // ������ �� ��° ���ҿ� �� ���హ�� ����
            cout << "inven.front() : " << inven.front() << endl; // ���

            cout << "�Ѱ�� : " << totalGold << "G" << endl;
            cout << "���� ���� : " << potion << endl;
            break;
        case 3:
            Loop = false; // while�� ����
            break;
        default:
            break;
        }
    }
}