#include "Framework.h"

int Calculator::Add(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 + integer2;
}

int Calculator::Sub(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 - integer2;
}

int Calculator::Mul(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 * integer2;
}

int Calculator::Div(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 / integer2;
}

float Calculator::Add(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 + singleNum2;
}

float Calculator::Sub(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 - singleNum2;
}

float Calculator::Mul(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 * singleNum2;
}

float Calculator::Div(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 / singleNum2;
}

void Calculator::Func(int x, int y)
{
	cout << "정수 x : " << x << endl;
	cout << "정수 y : " << y << endl;
}

void Calculator::Func(float x, float y)
{
	cout << "소수 x : " << x << endl;
	cout << "소수 y : " << y << endl;
}

int Calculator::Add(int add)
{
	if (sum == 0)
	{
		int first = Add(integer1, integer2); // 데이터에 저장된 기존 숫자를 써서 더하기를 1차 도출
		sum = first + add;
	}
	else sum += add; // sum에 값이 있으면 sum에 바로 add 더하기

	return sum; // 저장된 합계를 반환하기
}

int Calculator::Add(int x, int y, int z)
{
	//테스트용이라 데이터를 쓰지 않고 곧바로 코딩
	return x + y + z;
}
int Calculator::Add(float x, float y, float z)
{
	//int 함수에 매개변수 float 여러 개를 쓰기
	return (int)(x + y + z); //x + y + z를 먼저 계산한 후 (int)를 적용
}