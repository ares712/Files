#pragma once
#include "Framework.h"

class Data
{
public:

	UINT bingoAres = 0;
	
	char Block[2][3];
	char map[20][10];
	
	int score;
	int randNum;
	int num;

	// ����
	void IBlock();
	void OBlock();
	void TBlock();
	void JBlock();
	void LBlock();
	void ZBlock();
	void SBlock();

	void Board(); // ��
	
	void BlockData(); // �� ����

	void BlockRot(); // �� ȸ��

	void Score(); // ����
	bool Condition = false; // ���� ȹ�� ����

	void StartTetris();
};

