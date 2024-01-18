#pragma once
#include "Framework.h"

// �������� �ڽ� Ŭ����
class Calculator : public Data
{
public:

    // �⺻ ������
    Calculator() { Data(); }

    // �ڽ� Ŭ�������� ���� ���Ǵ� "���� �ڵ� �ۼ�"�� �����
    // �ٷ� "�Լ�"�̴�.

    // Data�� �Լ��� ��������, ������ �ٲ���
    // �Լ��� �뵵�� ����ϴ� ��� ���� ���� �� ���� ��ȯ�ϵ���
    int Add(int x, int y)
    {
        return x + y;
    }
    int Sub(int x, int y)
    {
        return x - y;
    }
    int Mult(int x, int y)
    {
        return x * y;
    }
    int Div(int x, int y)
    {
        if (y != 0)
        {
            return x / y;
        }
        else return 0;
    }
    int Nam(int x, int y)
    {
        if (y != 0)
        {
            return x % y;
        }
        else return 0;
    }
};

