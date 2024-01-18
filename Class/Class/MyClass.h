#pragma once
#include "Framework.h"

// 프로그램 내에서 부분 집합처럼 존재하는, 하지만 main()와는 분리된 독립 개체
// 이 안에 변수도 있고, 함수도 있고, 아무튼 개발자가 지정하는 "동작하기 위한 모든 것"
// 그 모두가 포함되는 가상의 범위를 C++에서는

// Class (클래스) 라고 한다 : 변수 + 함수 + 클래스가 프로그램에 있기 위한 추가 문법

class MyClass // Class 클래스명
{
private: // 접근 지정자, 클래스와 함께 나온 문법
	// private : 이 밑에 적힌 코드는(다른 접근 지정자가 나오지 않는한)
	// 클래스와 무관한 곳에서 (예 : main함수) 볼 수 없다
	// 볼 수 없으므로 함수 호출, 변수 수정 등 할 수 없다
	// 이 헤더 파일과 C++파일에서만 사용 할 수 있다

	// 클래스에 들어갈 수 있는 것
	// 변수

	int a = 100;
	int b = 50;
	float c = 99.99f;
	int id = 1234;

	// 함수
	int Add(int x, int y); // 함수 선언 가능
	void showFloat(float z) // 함수 정의 가능
	{
		cout << "z : " << z << endl;
	}

public:
	// public : 이 밑에 적힌 코드는 클래스와 무관한 곳에서도 부를 수 있다
	// 변수
	int x = 10;
	int y = 5;

	// private에서 작성한 코드는 여기서도 쓸 수 있다

	int Multi(int x1, int y1);

	// 그래서 private에 있는 데이터를 사용하는 함수만 여기에 작성을 해두면
	// private은 그대로 두고, public에서 호출용 함수만 쓸 수 있다

	// 예시1 : private에 있는 ShowFloat 함수를 쓸 수 있도록 하는 public의 호출용 함수

	void CallFunction(float z2) // 매개변수를 하나 받고
	{
		showFloat(z2); // private의 함수를 호출하면서 매개변수를 그대로 토스
	}

	// 예시2 : id를 수정할 수 없고, 볼 수만 있도록 하는 방법
	// int로 반환되는 함수를 만든다
	int ID() { return id; }
	// 실행하면 private에 있는 id를 컴퓨터에 전달하는게 유일한 목적인 함수
	// id를 상수처럼 열람만 할 수 있게 해주는 것이 존재 의의

	// 예시3 : id를 볼 수는 없지만, 수정만 할 수 있게 하는 방법
	void SetID(int value) { id = value; }
	// 오직 id를 수정하기 위해서만 존재하는 함수

	// =============================================================
	// 이니시에이터 작성(선언)
	void Init(int _a, int _b, int _c, int _id);
};

