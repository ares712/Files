#include "Framework.h"

void Item::Inventory()
{
    srand(GetTickCount64());
    
    // 벡터 만들기
    vector<int> inven;
    vector<int>::iterator it = inven.begin();
    
    // 벡터 크기 지정
    inven.resize(2);

    it = inven.begin();

    while (Loop)
    {
        cout << "다음 행동을 골라주세요." << endl;
        cout << "[1] 아이템 획득 [2] 인벤토리 확인 [3] 종료" << endl;
        cin >> input;

        randNum = rand() % 2; // 0 or 1 숫자 랜덤
        goldRandom = rand() % 100 + 1; // 1 ~ 100 랜덤

        switch (input)
        {
        case 1:
            // 골드 혹은 물약을 랜덤으로 획득한다 (0이면 골드를, 1이면 물약을 획득)
            if (randNum == 0)
            {
                // 골드를 획득하면 1~100사이의 골드를 랜덤으로 획득한다
                cout << goldRandom << "Gold를 획득했습니다." << endl;

                totalGold += goldRandom; // 총 골드에 획득한 골드 저장
            }
            else if (randNum == 1)
            {
                potion++; // 물약을 하나씩 획득
                cout << "물약을 획득했습니다." << endl;
            }
            break;
        case 2:
            it = inven.begin(); // inv1벡터 맨 처음으로 이동 (반복자 재지정)
            inven.insert(it, totalGold); // 벡터의 첫 번째 원소에 총 골드 저장
            cout << "inven.front() : " << inven.front() << endl; // 출력

            it = inven.begin(); // inv1벡터 맨 처음으로 이동 (반복자 재지정)
            inven.insert(it++, potion); // 벡터의 두 번째 원소에 총 물약갯수 저장
            cout << "inven.front() : " << inven.front() << endl; // 출력

            cout << "총골드 : " << totalGold << "G" << endl;
            cout << "물약 갯수 : " << potion << endl;
            break;
        case 3:
            Loop = false; // while문 종료
            break;
        default:
            break;
        }
    }
}