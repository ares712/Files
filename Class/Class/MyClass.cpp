#include "Framework.h"

// ���⼭ ������� �ۼ��� Ŭ������ �Լ� ���� ����

// ���� ���
// Ŭ������::�Լ���

int MyClass::Add(int x, int y)
{
	return x + y;
}

int MyClass::Multi(int x1, int y1)
{
	return x1 * y1;
}



void MyClass::Init(int _a, int _b, int _c, int _id)
{
	// ���⼭ ������ �� �ֵ��� �Ѵ�

	a = _a;
	b = _b;
	c = _c;
	id = _id;

	// ���߿��� ������ �ø� �� �þ ������ŭ ���⼭ �ʱ�ȭ�� �Ѵ�
	// ���⼭ ���ϴ� �ʱ�ȭ�� ���� ��ü�� �ʱ�ȭ�� ���ϱ⵵ ������
	// Ŭ���� ����� ���� "�ʱ� ����"�� ���� �����Ѵٴ� �浵 �ȴ�
}
