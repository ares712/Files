#pragma once
#include "Framework.h"

class Human
{
    // 사람을 클래스로 구현한다면 어떤 정보가 들어갈까?\

//private: //개인정보
protected: // 제한된 공개정보
    //protected : 자기와 상관이 없는 장소에서는 private처럼 볼 수 없다
    //            단, 자기를 상속받은 파생 클래스라면 이 데이터에 접근할 수 있다.

    int age; //나이
    int gender; //성별
    float height; // 키
    float weight; // 체중
    int hobby; // 취미

    // 사생활이라는 행동도 함수로 한번 표현해봅시다
    void PrivateLife() { cout << "사생활 중" << endl; }
    void Live() {} // 살기
    void Die() {} // 죽기

public: // 공개정보와 행동
    // 자기가 가진 정보를 필요에 따라 보여줄 수 있을 것이고
    int GetAge() { return age; }
    int GetGender() { return gender; }
    float GetHeight() { return height; }
    float GetWeight() { return weight; }
    int GetHobby() { return hobby; }

    //사회 교류와 상호작용도 있을 겁니다.
    void SocialLife() { cout << "주변 사람과 교류 중" << endl; }
    void Grow() {} // 성장
    void Marry() {} // 결혼
    void Merchandise() {} // 거래

    //기본 생성자
    Human() // 매개변수가 없는, 기준 인스턴스 생성용 생성자
    {
        // 기준 인간이란 건 원래 없으니까, "인간이 가지는 정보의 종류"만을 표현하는
        // 비현실적인 수치를 부여하도록 하겠습니다.

        // 만약 기준이 있는 클래스라면 (예 : "게임용 PC" "닌텐도 스위치" 같은 거) 기본 생성자에
        // 그 때는 각 변수에 각 개발자가 설정한 평균이나 최적 변수값을 미리 주는 편이 좋습니다.

        age = 0;
        gender = 0;
        height = 0;
        weight = 0;
        hobby = 0;
    }
    // (참고) 매개변수가 있는 생성자를 만들 경우, 기본 생성자도 같이 꼭 만드는 것이 추천 (C++ 기본 추천 사항)
    // 특히 클래스 내 변수가 클래스 안, 혹은 밖에서 연산에 직접 사용될 경우, 기본 생성자는 필수로 바뀝니다.
    // 그러므로 실제 생성자가 있든 없든, 기본 생성자는 일단 만들고 봅시다...! (팁)

    // 매개변수가 있는 생성자
    Human(int _age, int _gender, float _height, float _weight, int _hobby)
        // 괄호 뒤에 : 하나 입력으로 초기화 대상 지정, 각 변수들은 쉼표로 구분
        : age(_age),
        gender(_gender),
        height(_height),
        weight(_weight),
        hobby(_hobby) //변수가 다 지정됐으니 쉼표 없이 이니셜라이징 끝
    {
        // 변수 다 나왔으니까 특별한 일 없으면 여기에 코드가 없어도 괜찮고
        // 다른 할 일이 있으면 여기서 함수 하나 실행해도 된다
    }
};