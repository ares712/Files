#include <iostream>
#include <utility> // pair를 사용하기 위한 기능
#include <vector>

using namespace std;

int main()
{
    // 페어 선언하기
    // pair의 선언 방법
    // pair<type1, type2> dataName;
    // type1 : key값, 식별 자료
    // type2 : value값, 실체 자료

    pair<int, int> paint; // paint라는 데이터쌍 두 정수를 받는다
    pair<char*, int> charint; // charint라는 데이터쌍 문자열과 정수를 받는다

    // 페어 값 넣기
    paint.first = 1;
    paint.second = 2;

    cout << "paint.first : " << paint.first << endl;
    cout << "paint.second : " << paint.second << endl;

    char name[10] = "사람";
    charint.first = name;
    charint.second = 20;

    cout << "charint.first : " << charint.first << endl;
    cout << "charint.second : " << charint.second << endl;

    // 사실 pair도 구조체인데, 사용자가 만든 구조체와 뭐가 다른가?

    // 1. 기본으로 주어져 있다 (누구나 쓸 수 있다)
    // 2. 형태가 정해져 있다 (어떤 코드에든 갖다붙일 수 있다)
    // 3. 대신 변수의 개수는 항상 두 개.

    // -> 데이터를 단순하게 도식화하고 싶을 때, pair를 유용하게 쓸 수 있다

    // pair의 한계점도 존재한다
    // 변수 하나가 한번에 하나의 실체밖에 표현하지 못한다
    // 그래서 pair를 보통 사용할 때는 배열과 같이 쓰는 경우가 많다

    // 배열이 동적으로 제어되어야 할 경우에는 동적 배열도 사용
    vector<pair<char*, char*>> Dic;

    pair<int, int> testPair(2, 3); // 선언과 동시에 값을 부여할 수도 있다
    pair<int, int>* testPair2 = new pair<int, int>(3, 10); // 동적할당도 가능 하다
}