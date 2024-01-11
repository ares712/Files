#pragma once
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>

using namespace std;

class Rand
{
public:

	void RPS(); // 가위바위보 진행 함수

	// 게임 진행 여부
	bool playing1 = true;
	bool playing2 = true; 

	// 플레이어1 또는 플레이어2가 이기고 있다는 것을 알수 있는 것
	bool player1Win = true;

	int player1;
	int player2;

	int player1Score = 0; // 플레이어1 점수
	int player2Score = 0; // 플레이어2 점수
};

