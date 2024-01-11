﻿#include <iostream>
#include <vector> // 벡터, c++에서 가장 흔한 동적 배열

using namespace std;

// 벡터 : 배열인데 크기가 개발자 마음대로인 것
    //       -> 기본적으로는 배열과 형태가 거의 같다. 중간 취급만 다를 뿐.
    //       -> 가장 널리 쓰이고, 가장 단순하고, 가장 속 편한데
    //       -> 동시에 가장 내부가 복잡하고, 가장 귀찮은 동적 배열이기도

int main()
{
    // 벡터 선언
    vector<int> vec;
    // vector<타입명(int, float, string 등)>
    // vec : 벡터명

    // 벡터 추가
    vec.push_back(1); // 배열의 마지막에 1을 추가함
    // push_back(a) : 베열의 마지막에 추가 구성요소(a)를 더하는 함수
    // 소수와 문자열이 안되는 이유 : vec를 int자료형으로 선언을 했기 때문에

    vec.push_back(2); // 배열의 마지막에 2를 추가함
    vec.push_back(3); // 배열의 마지막에 3을 추가함
    vec.push_back(4); // 배열의 마지막에 4를 추가함
    vec.push_back(5); // 배열의 마지막에 5를 추가함

    // 출력
    cout << "vec[0] : " << vec[0] << endl; 
    cout << "vec[1] : " << vec[1] << endl;
    cout << "vec[2] : " << vec[2] << endl;
    cout << "vec[3] : " << vec[3] << endl;
    cout << "vec[4] : " << vec[4] << endl;

    // 벡터 삭제
    vec.pop_back(); // 배열의 마지막 구성요소인 vec[4]를 삭제함
    // pop_back() : 베열의 마지막 구성요소를 삭제함

    // 벡터 시작 데이터
    vec.begin(); // 벡터의 시작 데이터를 컴퓨터에게 전달하는 함수

    // 벡터 마지막 데이터
    vec.end(); // "벡터 데이터의 마지막"을 컴퓨터에게 전달하는 함수.

    // 벡터의 특정 순번을 호출
    vec.at(3); // vec[3] 과 기본적으론 같음
    cout << "vec.at(3) : " << vec.at(3) << endl;

    // at과 []의 차이점
    // 똑같은 벡터의 "실제로는 없는 구성요소"를 참조할래도
    // []를 쓰면 : 일단은 그 메모리에서 값을 찾아보려고 용을 쓴다
    //            -> 그 결과, 아무튼 실행은 되거나 (대신 의도치 않은 값이 나온다)
    //            -> 일정 시간 동안 애를 쓰다가 앱이 다운되거나
    //            -> (운 나쁜 옛날 컴퓨터는) 그 시간을 못 견뎌서 컴퓨터가 다운되거나

    // 반면 at을 쓰면 : 오류 메시지가 뜬 후, 사용자가 대답을 뭐라고 하든 말든
    //                 "유효하지 않다"는 결과에 따라 즉시 앱을 꺼버린다
    //                 사용자 입장에서는 오류 날 상황에서 빨리 꺼지니 좋고
    //                 컴퓨터 입장에서는 안전.
    //                 .......대신 []보다는 느리다 (유효성 검사를 꼭 하니까)

    // 벡터의 중간에 값 삽입하기
    vec.insert(vec.begin() + 1, 100); // 1번 순번 (2번째 위치)에 100을 추가

    cout << "vec[0] : " << vec[0] << endl;
    cout << "vec[1] : " << vec[1] << endl;
    cout << "vec[2] : " << vec[2] << endl;
    cout << "vec[3] : " << vec[3] << endl;

    // insert와 같은 역할을 하는 다른 함수
    vec.emplace(vec.begin() + 2, 200); // 2번 순번 (3번째 위치)에 200을 추가

    cout << "vec[0] : " << vec[0] << endl;
    cout << "vec[1] : " << vec[1] << endl;
    cout << "vec[2] : " << vec[2] << endl;
    cout << "vec[3] : " << vec[3] << endl;

    // 벡터의 중간에 값 삭제하기
    vec.erase(vec.begin() + 3); // insert, emplace와 마찬가지로 vec.begin()을 기준으로 삼아야 한다

    // 벡터의 길이를 나타내는 함수
    vec.size();

    cout << "vec.size() : " << vec.size() << endl;
    
    // 벡터 다 지우기
    vec.clear();

    // 벡터의 값을 전부다 지움

    // 벡터의 크기를 미리 예약하는 함수
    vec.resize(10);

    // 반복문을 이용한 벡터 값 할당하기
    for (int i = 0; i < 10; ++i)
    {
        vec[i] = i + 1;
        cout << "vec[i] : " << vec[i] << endl;
    }
}