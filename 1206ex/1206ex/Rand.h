#pragma once
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>

using namespace std;

class Rand
{
public:

	void RPS(); // ���������� ���� �Լ�

	// ���� ���� ����
	bool playing1 = true;
	bool playing2 = true; 

	// �÷��̾�1 �Ǵ� �÷��̾�2�� �̱�� �ִٴ� ���� �˼� �ִ� ��
	bool player1Win = true;

	int player1;
	int player2;

	int player1Score = 0; // �÷��̾�1 ����
	int player2Score = 0; // �÷��̾�2 ����
};

