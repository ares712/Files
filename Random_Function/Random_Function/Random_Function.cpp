#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // 랜덤함수 준비
    // 1. 기능추가
    // #include <Windows.h> : 윈도우에서 사용되는 표준 기능 집합
    // #include <stdlib.h> : C++ 표준기능 집합

    // 2. 시드(랜덤 숫자 생성에 필요한 기준 데이터) 생성
    srand(GetTickCount64()); // 현재 시간을 기준으로 시드를 생성

    // 3. 랜덤 숫자 생성
    int randomNum = rand();
    // 랜덤으로 만들어지는 숫자 : 약 -32500부터 약 32500 사이 (정확하게는 65535/2를 음수 양수로 정한 범위까지)

    cout << "randomNum : " << randomNum << endl;

    randomNum = rand() % 100 + 1; // 1 ~ 100 까지의 숫자를 랜덤 생성
    // % 100 : (다른 계산이 없을 때의) 최대값을 지정하는 방법 (~로 나누었을 때 생기는 나머지 0부터 99까지를 범위로 지정)
    // + 1 : (최대값이 나온 다음) 최소값과 최대값을 바꾸는 방법 (0~99에 1을 더함으로써 1~100로 범위를 변경)

    // 공식화하면 rand() % "기본 최대값" + "최소값과 최대값 변동"
}
