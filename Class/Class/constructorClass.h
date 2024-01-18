#pragma once
#include "Framework.h"

class constructorClass
{
private: // 밖에서 보면 안되는 자료
	// 변수
	int id;
	int hp;
	int atk;
	const int id2;
	int money;

	// 함수
	void curMoney(int _money);

public: // 밖에서 호출 가능
	// 변수 세팅 함수, 이니시에이터
	void Init(int _id, int _hp, int _atk);

	// 이니시에이터 대신에 쓸 수 있는, 객체의 값을 처음에 설정하는 방법
	// 생성자(constructor)
	
	// 생성자 작성 예시
	constructorClass() // 자료형 없이, 클래스 이름을 그대로 사용한 함수 생성
	// 이 함수는 인스턴스 생성시에 단 한 번 부를 수 있다
	// 생성 후 return없이 constructorClass라는 클래스를 반환 후 인스턴스 적용
	// 오류 방지용 코드
		: id2(0)
	{
		// 생성자에서 각 변수를 설정 가능
		id = 0;
		hp = 100;
		atk = 10;
		money = 0;
	} // 이것이 기본 생성자

	// 생성자는 매개변수를 다르게하면 한 클래스에 여러개의 생성자를 만들 수 있다
	constructorClass(int _id, int _hp, int _atk, int _money)
	// 오류 방지용 코드
		: id2(0)
	{
		// 받은 매개변수를 private였던 변수에 대입
		id = _id;
		hp = _hp;
		atk = _atk;
		money = _money;
	}

	constructorClass(int _id, int _hp, int _atk, int _money, int, int _constValue )
		: id2(_constValue), id(_id), hp(_hp), atk(_atk)
		// 매개변수 넣는 ()가 끝난 뒤에 :을 붙이고
		// : 뒤에 클래스에서 필요한 변수와, 그 안에 들어가야 할 값을 변수(값) 모양으로
		// 입력해준다. 이 방법으로 값을 할당할 변수가 둘 이상이면 ,(쉼표)로 구분한다
		// 이렇게 매개변수를 초기화에 직접 사용하는 문법을...

		// "멤버 이니셜라이저"라고 한다 (줄여서 이니셜라이저)
	
	{
		// money 빼고 다른 변수 할당 삭제
		money = _money;
	}

	// 생성자를 만든다고 모든 변수에 매개변수를 대입할 필요는 없다
	// 무조건 정해진 변수가 있다면 그건 그냥 생성자 내에서 따로 만들어도 무방

	// 이렇게 생성자를 만들게 되면, 인스턴스 생성과 동시에 (혹은 거의 동시에)
	// 변수를 클래스에 곧바로 값 할당 가능.

	// 인스턴스 생성 시에 부르는 것이기 때문에, public으로 호출 가능하면서도
	// 불필요하게 여러 번 호출해서 데이터의 안전을 위협할 가능성이 줄어든다
};

