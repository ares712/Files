#include "Framework.h"

// 여기서 헤더에서 작성된 클래스의 함수 정의 가능

// 정의 방법
// 클래스명::함수명

int MyClass::Add(int x, int y)
{
	return x + y;
}

int MyClass::Multi(int x1, int y1)
{
	return x1 * y1;
}



void MyClass::Init(int _a, int _b, int _c, int _id)
{
	// 여기서 변수를 다 넣도록 한다

	a = _a;
	b = _b;
	c = _c;
	id = _id;

	// 나중에도 변수가 늘면 그 늘어난 변수만큼 여기서 초기화를 한다
	// 여기서 말하는 초기화는 변수 자체의 초기화를 뜻하기도 하지만
	// 클래스 사용을 위해 "초기 상태"를 수동 설정한다는 뜻도 된다
}
