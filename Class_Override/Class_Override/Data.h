#pragma once
#include "Framework.h"

class Data
{
protected:

	int num1;
	int num2;
	int num3;

	float flo1;
	float flo2;
	float flo3;

public:

	Data()
	{
		num1 = 0;
		num2 = 0;
		num3 = 0;

		flo1 = 0;
		flo2 = 0;
		flo3 = 0;
	}

	// �����Ϳ� �̸� "�� �����ͷ� �� �� �ִ� �Լ�"�� �⺻ �ȳ��� �ۼ�
    int Add(int x, int y)
    {
        std::cout << "�� �Լ��� ���ϱ⸦ ���� ��������ϴ�" << std::endl;
        return 0;
    }
    int Sub(int x, int y)
    {
        std::cout << "�� �Լ��� ���⸦ ���� ��������ϴ�" << std::endl;
        return 0;
    }
    int Mult(int x, int y)
    {
        std::cout << "�� �Լ��� ���ϱ⸦ ���� ��������ϴ�" << std::endl;
        return 0;
    }
    int Div(int x, int y)
    {
        std::cout << "�� �Լ��� �����⸦ ���� ��������ϴ�" << std::endl;
        return 0;
    }
    int Nam(int x, int y)
    {
        std::cout << "�� �Լ��� ������ ������ ���� ��������ϴ�" << std::endl;
        return 0;
    }
};

