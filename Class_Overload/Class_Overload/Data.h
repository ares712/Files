#pragma once

// 계산기에 쓸 데이터 클래스
class Data
{
// 상속받는 클래스가 있으면 거기서도 쓸 수 있게
protected:
	// 정수 데이터
	int integer1;
	int integer2;

	// 소수 데이터
	float singleNum1;
	float singleNum2;
	// single : 부동소수점 자료형을 지칭하는 또 다른 이름 중 하나
	// "1배수 정밀도", "단정밀도"를 뜻함

	// 배정밀도 데이터
	double doubleNum1;
	double doubleNum2;

	// 합계
	int sum;

public:
	// 이 클래스의 존재의의 : 내부에 있는 데이터를 외부에서 못 보게 하기(숨기기)
	// 하지만 상속받으면 그 클래스에서는 데이터를 쓸 수 있게 하기

	// 함수는 없어도 생성자는 만든다
	Data()
	{
		integer1 = 0;
		integer2 = 0;
		singleNum1 = 0;
		singleNum2 = 0;
		doubleNum1 = 0;
		doubleNum2 = 0;

		sum = 0;
	}
};

