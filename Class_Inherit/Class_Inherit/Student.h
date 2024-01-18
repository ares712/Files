#pragma once
#include "Framework.h"

// �л��� ��Ÿ���� Ŭ����

// Ŭ������ ���
// �ۼ���
class Student : public Human 
    // class Ŭ������ : public ������
    // ������ ���� public ��� private�� �͵� ������, ���������� public�� ���� ���δ�
    // ���� : ���⼭ private�� ����, �������� public�̾��� �� ���⼭ private�� �ȴ�
    //       -> ������ �ִ� ���� ��� �����͸� (�ڱ� �ǵ���) �ڱⰡ �� �θ��� �Ǵϱ�
{
    // ��ó�� ������ Student�� Human�� ��� �Ӽ��� �����ϴ� �Ļ� Ŭ����(branched)�� �ȴ�
    // �ڽ� Ŭ����(child), ��ӵ� Ŭ����(inherited), ���� Ŭ����(slave) �����ε� �Ҹ���

private:

    // �л��� ��Ÿ���� ������ ���� ���� �ʴ´�.
    // (�Ļ� Ŭ������ ���� Ŭ������ ��� �����͸� ���� ���´�)

    // �л� ������ ���� (�ΰ����� ���� �л��̾�� ������ ����)
    int schoolCode; // �ڵ�� ��Ÿ�� �б���
    int grade; // �г�
    float averageScore; // �������

public:
    // �⺻ ������
    Student()
    {
        Human(); // �ΰ� �⺻ ������ ���
        schoolCode = 0;
        grade = 0;
        averageScore = 0;
    }

    // �Ű������� �ִ� ������
    Student(int age, int gender, float height, float weight, int hobby, int _school, int _grade, float _score)
        : Human(age, gender, height, weight, hobby)
    {
        // �л��� �ΰ��̴�, ���� (Ȥ�� ����) �ΰ��� ��������� �Ѵ�
        // Human(age, gender, height, weight, hobby);

        // �׸��� �л� ���� ������ �̾ ����
        schoolCode = _school;
        grade = _grade;
        averageScore = _score;
    }

    // �л� ��¿� �Լ�
    void PrintMe()
    {
        // �� �ڵ� ó�� �ۼ� �� ������ �� ���� : age�� private�̶�
        std::cout << "�� ���̴� " << age << ", �׸��� �� �г��� " << grade << "�г��Դϴ�." << std::endl;

        // this->GetAge() ��밡��, Human�� protected�� ����Ǹ� age ���� ����
        // �̰��� Ŭ���� �ܺ� ������, ����� ���� ū ����

        // �л��� �ΰ��̴ϱ� Human�� protected�� ����� ��,
        // Human�� ������� ��� �Լ����� ���⼭ ȣ�� ����

        this->PrivateLife();
    }
};

