#include <iostream>
#include <vector>
#include <map>

using namespace std;

/*
int main()
{
    vector<int> vec;

    // 벡터에 1부터 10까지 넣기
    for (int i = 0; i < 10; ++i)
    {
        vec.push_back(i + 1);
    }

    // 벡터에서 5 지워보기 (순서는 그대로)
    int indexFound = -1; // 찾은 순번
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] == 5)
        {
            // 위에서 만든 indexFound 사용
            indexFound = i; // 찾아낸 위치를 정수 변수에 할당해서 빼내기
            break; // 탐색은 끝났으니 여기서 바로 종료
        }
    }

    if (indexFound >= 0) // 최초 1회용 조건문, indexFound가 0 이상인가? = 벡터에 5가 있었는가?
    {
        // 여기서 정리 전용 반복문
        for (int i = indexFound; i < vec.size() - 1; ++i)
            // 이 반복문은 아까 찾아낸 순번부터 시작하고, 벡터의 끝이 아닌 끝에서 한 번 앞순번까지 간다
        {
            // 여기서 좌우 위치 바꾸기
            int tmp = vec[i + 1];
            vec[i + 1] = vec[i];
            vec[i] = tmp;

            // 이렇게 끝까지 (벡터의 끝의 앞 순번까지) 가면, 찾아낸 순번의 데이터를 벡터의 끝으로 밀어내기 가능
        }
    }

    // 정리된 벡터를 출력
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << endl;
    }

    // 순서가 다 정리된 다음에 벡터에서 pop_back 실행
    vec.pop_back();

    cout << "===" << endl;

    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << endl;
    }
}*/