#pragma once

// ���⿡ �� ������ Ŭ����
class Data
{
// ��ӹ޴� Ŭ������ ������ �ű⼭�� �� �� �ְ�
protected:
	// ���� ������
	int integer1;
	int integer2;

	// �Ҽ� ������
	float singleNum1;
	float singleNum2;
	// single : �ε��Ҽ��� �ڷ����� ��Ī�ϴ� �� �ٸ� �̸� �� �ϳ�
	// "1��� ���е�", "�����е�"�� ����

	// �����е� ������
	double doubleNum1;
	double doubleNum2;

	// �հ�
	int sum;

public:
	// �� Ŭ������ �������� : ���ο� �ִ� �����͸� �ܺο��� �� ���� �ϱ�(�����)
	// ������ ��ӹ����� �� Ŭ���������� �����͸� �� �� �ְ� �ϱ�

	// �Լ��� ��� �����ڴ� �����
	Data()
	{
		integer1 = 0;
		integer2 = 0;
		singleNum1 = 0;
		singleNum2 = 0;
		doubleNum1 = 0;
		doubleNum2 = 0;

		sum = 0;
	}
};

