#pragma once
#include "Framework.h"

// 학생을 나타내는 클래스

// 클래스의 상속
// 작성법
class Student : public Human 
    // class 클래스명 : public 원본명
    // 원래는 위에 public 대신 private이 와도 되지만, 현실적으로 public이 거의 쓰인다
    // 이유 : 여기서 private을 쓰면, 원본에서 public이었던 게 여기서 private이 된다
    //       -> 원본에 있는 거의 모든 데이터를 (자기 건데도) 자기가 못 부르게 되니까
{
    // 위처럼 적으면 Student는 Human의 모든 속성을 공유하는 파생 클래스(branched)가 된다
    // 자식 클래스(child), 상속된 클래스(inherited), 종속 클래스(slave) 등으로도 불린다

private:

    // 학생을 나타내는 변수는 따로 적지 않는다.
    // (파생 클래스는 원본 클래스의 모든 데이터를 같이 갖는다)

    // 학생 고유의 변수 (인간에겐 없고 학생이어야 가지는 변수)
    int schoolCode; // 코드로 나타낸 학교명
    int grade; // 학년
    float averageScore; // 평균학점

public:
    // 기본 생성자
    Student()
    {
        Human(); // 인간 기본 생성자 사용
        schoolCode = 0;
        grade = 0;
        averageScore = 0;
    }

    // 매개변수가 있는 생성자
    Student(int age, int gender, float height, float weight, int hobby, int _school, int _grade, float _score)
        : Human(age, gender, height, weight, hobby)
    {
        // 학생도 인간이니, 먼저 (혹은 같이) 인간도 만들어져야 한다
        // Human(age, gender, height, weight, hobby);

        // 그리고 학생 전용 변수도 이어서 지정
        schoolCode = _school;
        grade = _grade;
        averageScore = _score;
    }

    // 학생 출력용 함수
    void PrintMe()
    {
        // 이 코드 처음 작성 시 오류가 난 이유 : age가 private이라서
        std::cout << "내 나이는 " << age << ", 그리고 내 학년은 " << grade << "학년입니다." << std::endl;

        // this->GetAge() 사용가능, Human이 protected가 적용되면 age 접근 가능
        // 이것이 클래스 외부 참조와, 상속의 가장 큰 차이

        // 학생도 인간이니까 Human이 protected로 적용된 후,
        // Human의 비공개된 모든 함수까지 여기서 호출 가능

        this->PrivateLife();
    }
};

