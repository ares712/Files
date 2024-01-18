#pragma once
#include "Framework.h"

class Data
{
protected:

	int num1;
	int num2;
	int num3;

	float flo1;
	float flo2;
	float flo3;

public:

	Data()
	{
		num1 = 0;
		num2 = 0;
		num3 = 0;

		flo1 = 0;
		flo2 = 0;
		flo3 = 0;
	}

	// 데이터에 미리 "이 데이터로 할 수 있는 함수"의 기본 안내를 작성
    int Add(int x, int y)
    {
        std::cout << "이 함수는 더하기를 위해 만들었습니다" << std::endl;
        return 0;
    }
    int Sub(int x, int y)
    {
        std::cout << "이 함수는 빼기를 위해 만들었습니다" << std::endl;
        return 0;
    }
    int Mult(int x, int y)
    {
        std::cout << "이 함수는 곱하기를 위해 만들었습니다" << std::endl;
        return 0;
    }
    int Div(int x, int y)
    {
        std::cout << "이 함수는 나누기를 위해 만들었습니다" << std::endl;
        return 0;
    }
    int Nam(int x, int y)
    {
        std::cout << "이 함수는 나머지 도출을 위해 만들었습니다" << std::endl;
        return 0;
    }
};

