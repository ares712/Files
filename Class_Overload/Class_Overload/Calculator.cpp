#include "Framework.h"

int Calculator::Add(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 + integer2;
}

int Calculator::Sub(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 - integer2;
}

int Calculator::Mul(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 * integer2;
}

int Calculator::Div(int x, int y)
{
	integer1 = x;
	integer2 = y;
	return integer1 / integer2;
}

float Calculator::Add(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 + singleNum2;
}

float Calculator::Sub(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 - singleNum2;
}

float Calculator::Mul(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 * singleNum2;
}

float Calculator::Div(float x, float y)
{
	singleNum1 = x;
	singleNum2 = y;
	return singleNum1 / singleNum2;
}

void Calculator::Func(int x, int y)
{
	cout << "���� x : " << x << endl;
	cout << "���� y : " << y << endl;
}

void Calculator::Func(float x, float y)
{
	cout << "�Ҽ� x : " << x << endl;
	cout << "�Ҽ� y : " << y << endl;
}

int Calculator::Add(int add)
{
	if (sum == 0)
	{
		int first = Add(integer1, integer2); // �����Ϳ� ����� ���� ���ڸ� �Ἥ ���ϱ⸦ 1�� ����
		sum = first + add;
	}
	else sum += add; // sum�� ���� ������ sum�� �ٷ� add ���ϱ�

	return sum; // ����� �հ踦 ��ȯ�ϱ�
}

int Calculator::Add(int x, int y, int z)
{
	//�׽�Ʈ���̶� �����͸� ���� �ʰ� ��ٷ� �ڵ�
	return x + y + z;
}
int Calculator::Add(float x, float y, float z)
{
	//int �Լ��� �Ű����� float ���� ���� ����
	return (int)(x + y + z); //x + y + z�� ���� ����� �� (int)�� ����
}