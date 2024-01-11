#include "Rand.h"

void Rand::RPS()
{
	srand(GetTickCount64());
	cout << "가위바위보 게임" << endl;

	// =============================가위 바위 보 시작=========================================
	// 가위 바위 보
	// 1. 두 플레이어가 어떤걸 낼지 정하기
	// 2. 두 플레이어가 랜덤으로 가위, 바위, 보 중 한개를 냈을 때 비교하기
	// 3. 한 플레이어가 이겼을 때, 졌을 때, 비겼을 때를 구분해서 구현

	// 플레이어1이 가위를 내고 플레이어2가 바위를 낸다고 치면

	cout << "0~2 숫자를 입력 해주세요.(첫번째)" << endl;
	cout << "(0 : 가위, 1 : 바위, 2 : 보)" << endl;

	cin >> player1;
	player2 = 2;

	cout << endl;

	while (playing1)
	{
		// 플레이어1이 이기면
		if (player1 == 0 && player2 == 2)
		{
			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			cout << endl;

			cout << "player1이 이겼습니다." << endl;

			cout << endl;

			player1Win = true; // 플레이어1이 이기고있으니 true

			playing1 = false;
		}
		// 플레이어2가 이기면
		else if (player1 == 1 && player2 == 2)
		{
			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			cout << endl;

			cout << "player2가 이겼습니다." << endl;
			player1Win = false; // 플레이어1이 지고있으니 false

			playing1 = false;
		}
		// 플레이어1과 플레이어2가 비기면
		else if (player1 == player2)
		{
			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			cout << endl;

			cout << "비겼습니다." << endl;
			cout << "다시 입력해주세요." << endl;
			cin >> player1;
			player2 = 2;
		}
		else
		{
			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			cout << endl;

			cout << "잘못 입력하셨습니다." << endl;
			cin >> player1;
			player2 = 2;
		}
	}
	
	// =============================가위 바위 보 끝=========================================

	while (playing2)
	{
		// 같은 것을 내면 
		if (player1 == player2)
		{
			if (player1Win)
			{
				// 플레이어1이 점수 획득
				cout << "상대방과 똑같은 것을 냈습니다." << endl;
				cout << "점수를 1점 획득합니다." << endl;
				player1Score++;

				cout << endl;

				cout << "player1 점수 : " << player1Score << endl;
				cout << "player2 점수 : " << player2Score << endl;

				cout << "0~2 숫자를 입력 해주세요.(네 번째, 플레이어1이 이길 경우)" << endl;
				cout << "(0 : 가위, 1 : 바위, 2 : 보)" << endl;

				// 플레이어1이 이겼으므로 player1Win은 true로 변경하고
				// 다시 가위 바위 보 진행
				cin >> player1;
				player2 = 2;

				cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
				cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

				cout << endl;
			}
			else if (!player1Win)
			{
				// 플레이어2가 점수 획득
				cout << "상대방과 똑같은 것을 냈습니다." << endl;
				cout << "점수를 1점 획득합니다." << endl;
				player2Score++;

				cout << endl;

				cout << "player1 점수 : " << player1Score << endl;
				cout << "player2 점수 : " << player2Score << endl;

				cout << "0~2 숫자를 입력 해주세요.(다섯 번째, 플레이어1이 이길 경우)" << endl;
				cout << "(0 : 가위, 1 : 바위, 2 : 보)" << endl;

				// 플레이어1이 이겼으므로 player1Win은 true로 변경하고
				// 다시 가위 바위 보 진행
				cin >> player1;
				player2 = 2;

				cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
				cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

				cout << endl;
			}
		}
		// 다른 것을 내는 경우1 (플레이어1이 이길 경우)
		else if (player1 == 0 && player2 == 2)
		{
			player1Win = true;

			cout << "0~2 숫자를 입력 해주세요.(두 번째, 플레이어1이 이길 경우)" << endl;
			cout << "(0 : 가위, 1 : 바위, 2 : 보)" << endl;

			// 플레이어1이 이겼으므로 player1Win은 true로 변경하고
			// 다시 가위 바위 보 진행
			cin >> player1;
			player2 = 2;

			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			cout << endl;
		}

		// 다른 것을 내는 경우2 (플레이어1이 질 경우)
		else if (player1 == 1 && player2 == 2)
		{
			player1Win = false;
			cout << "player2가 이겼습니다." << endl;

			cout << endl;

			cout << "0~2 숫자를 입력 해주세요.(세번째, 플레이어2가 이길 경우)" << endl;
			cout << "(0 : 가위, 1 : 바위, 2 : 보)" << endl;

			// 플레이어1이 졌으므로 player1Win은 false로 변경하고
			// 다시 가위 바위 보 진행
			cin >> player1;
			player2 = 2;

			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			cout << endl;
		}

		if (player1Score == 3)
		{
			cout << "player1이 승리했습니다!!" << endl;
			playing2 = false; // 종료
		}

		if (player2Score == 3)
		{
			cout << "player2가 승리했습니다!!" << endl;
			playing2 = false; // 종료
		}
	}
}