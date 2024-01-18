#pragma once
#include "Framework.h"

// 데이터 클래스 상속받기
class Calculator : public Data
{
	// 원본(Data)에 있으니 변수를 작성할 필요가 없다

public: // 외부 호출용 함수 작성

	// 정수들을 사용한 함수들
	int Add(int x, int y);
	int Sub(int x, int y);
	int Mul(int x, int y);
	int Div(int x, int y);

	// 소수를 사용한 사칙연산 만들기
	float Add(float x, float y); // Add라는 함수명을 사용한 "소수" 더하기
	float Sub(float x, float y); // 같은 함수명에 소수 빼기
	float Mul(float x, float y);
	float Div(float x, float y);

	// * C++에서 이해하는 함수의 이름은 함수명의 첫 글자부터 매개변수 지정이 끝나는 곳까지
	// 다시 말해 Add의 대문자 A부터 맨 뒤의 ) 표시까지.
	// * 함수를 작성하는 시점에서는 이 부분이 선언과 정의가 달라지지 않게 주의해야
	// * 한편 똑같은 일을 해야 할, 그러나 매개변수 환경이 다른 함수가 있을 때
	//   일일이 다른 "함수명"을 적용해서 작성하면 사용할 때 귀찮으므로, c++에서 이해하는
	//   함수의 이름의 특성(매개변수까지 명칭으로 이해)을 이용해서
	//   같은 함수명에, 다른 매개변수를 사용한 별개의 함수를 또 만들 수 있다

	// 이렇게 다른 매개변수를 사용해 "같은 함수명"을 만드는 것을
	// 함수의 누적, 혹은 함수의 "오버로드"라고 한다(overload, overloading)

	// 함수 오버로드 예시용 코드
	void Func(int x, int y);
	void Func(float x, float y);

	// 함수 오버로드의 또 다른 응용 : 매개변수의 개수

	int Add(int add); //매개변수 한 개짜리 더하기

	//아래 두 함수는 테스트용
	int Add(int x, int y, int z); //매개변수 세 개짜리
	int Add(float x, float y, float z); //int인데 float 세 개 받는 함수

	//이렇게, 함수 오버로드를 사용하면 매개변수의 숫자에도, 매개변수의 형식에도 변화를 줄 수 있다

	// 기본 생성자
	Calculator()
	{
		//계산기를 만들면 원본 데이터도 같이 생성
		Data();
	}
};

