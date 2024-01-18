#pragma once
#include "Framework.h"

// 데이터의 자식 클래스
class Calculator : public Data
{
public:

    // 기본 생성자
    Calculator() { Data(); }

    // 자식 클래스에서 흔히 사용되는 "같은 코드 작성"의 대상은
    // 바로 "함수"이다.

    // Data의 함수를 가져오되, 내용을 바꾸자
    // 함수의 용도를 출력하는 대신 직접 연산 후 값을 반환하도록
    int Add(int x, int y)
    {
        return x + y;
    }
    int Sub(int x, int y)
    {
        return x - y;
    }
    int Mult(int x, int y)
    {
        return x * y;
    }
    int Div(int x, int y)
    {
        if (y != 0)
        {
            return x / y;
        }
        else return 0;
    }
    int Nam(int x, int y)
    {
        if (y != 0)
        {
            return x % y;
        }
        else return 0;
    }
};

