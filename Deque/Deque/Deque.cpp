#include <iostream>
#include <deque>

using namespace std;

// Deque : 양극성 큐(double ended queue)
//         양쪽에 자료를 추가할 수 있도록 만든 누적 유형 자료 구조
//         (위나 밑에 데이터를 추가할 수 있도록 만든 동적 배열)

int main()
{
    // 디큐 선언하기
    deque<int> intDeque;

    intDeque.resize(10); // 크기 설정
    for (int i = 0; i < intDeque.size(); ++i)
    {
        intDeque[i] = i + 1; // 
        cout << intDeque[i] << endl;
    }

    // 원소 추가하기
    // 디큐는 push_back, pop_back, insert, erase, emplace 모두 사용 가능
    // 더불어서 아래 두 함수가 기본적으로 사용 가능

    intDeque.push_front(-1); // push_front : 디큐 배열의 맨 처음의 앞에 새 구성요소 추가

    intDeque.pop_front(); // pop_front : 디큐 배열의 맨 처음의 앞에 구성요소 삭제

    // dq의 추가 특징 (C++에서)
    // : 벡터와 마찬가지로, push, insert, emplace, erase 실행 시
    //   반복자 무효화 현상이 일어난다 (*주의!)

    // 1. 사본 형성의 가능성 때문에
    //    (사본 형성이 잘 안 일어나는 거지, 절대 안 일어나는 건 아니다)
    // 2. 배열 앞에도 구성요소가 추가될 수 있기 때문에 (=begin의 의미가 자꾸 달라진다)

    // -----------------------------------------

    // 디큐는 자료 관리 능력이 뛰어난, 벡터보다 개선된 자료 구조이지만,
    // 메모리 효율이 낮아서 게임 개발에서는 비교적 덜 선호된다
    // (써야 되면 주로 벡터 혹은 더 자주 선택되기론 리스트)
}
