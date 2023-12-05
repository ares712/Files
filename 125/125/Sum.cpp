#include "Framework.h"


Sum::Sum()
{
	if (instance == nullptr)
	{

	}
}

void Sum::Add(float _input)
{
	cin >> _input;
	floatVec.push_back(_input);
	result = floatVec[_input];
}

void Sum::Result()
{
	for (int i = 0; i < 5; ++i)
	{
		result;
	}
}
// 입력값
// 연속으로 입력값2번출력