#pragma once
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>
#include <map>

using namespace std;

class Rand
{
public:

	void RPS(); // 가위바위보 진행 함수

	bool playing = true; // 게임 진행 여부
	bool player1Turn = false; // 선공여부
	bool player2Turn = false;

	int player1;
	int player2;

	int player1Score = 0; // 플레이어1 점수
	int player2Score = 0; // 플레이어2 점수
	int input; // 입력 값;

};

