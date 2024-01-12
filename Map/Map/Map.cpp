#include <iostream>
#include <map>

using namespace std;

// map : pair의 강화판
// 복수의 key와 그에 대응하는 value로 이루어진 데이터쌍의 트리

int main()
{
    // 맵 선언
    map<int, int> intMap; // 맵핑의 목록

    // 맵에 실제 값 주기 : insert 사용
    intMap.insert({ 1, 2 });
    intMap.insert({ 3, 4 });
    intMap.insert({ 5, 6 });
    intMap.insert({ 7, 8 });
    intMap.insert({ 9, 10 });
    intMap.insert({ 6, 11 });

    intMap.insert({ 1, 222 });
    // 맵에 key가 1인 요소가 이미 있기 때문에 위 코드가 무시된다

    // 맵 출력하기 : 반복자를 사용
    for (map<int, int>::iterator it = intMap.begin();
        it != intMap.end();
        ++it)
    {
        cout << "key : " << it->first << endl;
        cout << "value : " << it->second << endl;
    }

    // map이 벡터와 다른 문법 사용 방법
    // 1. insert에 위치를 지정해주지 않아도 된다

    // 2. key를 중복시키면안된다, value는 중복해도 됨

    // 맵의 다른 기능 : find
}
