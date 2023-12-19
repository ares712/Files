#include "Rand.h"

void Rand::RPS()
{
	srand(GetTickCount64());

	cout << "가위바위보 게임" << endl;

	while (playing)
	{
		// =============================가위 바위 보 시작=========================================
		// 가위 바위 보
		// 1. 두 플레이어가 어떤걸 낼지 정하기
		// 2. 두 플레이어가 랜덤으로 가위, 바위, 보 중 한개를 냈을 때 비교하기
		// 3. 한 플레이어가 이겼을 때, 졌을 때, 비겼을 때를 구분해서 구현

		player2 = rand() % 3; // 0~2까지 랜덤 숫자 출력

		cout << "0~2 숫자를 입력 해주세요." << endl;
		cout << "(0 : 가위, 1 : 바위, 2 : 보)" << endl;
		cin >> player1;

		cout << endl;

		cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
		cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

		cout << endl;

		// 플레이어1이 이길 경우
		if (player1 == 0 && player2 == 2 ||
			player1 == 1 && player2 == 0 ||
			player1 == 2 && player2 == 1)
		{
			cout << "플레이어1이 이겼습니다!" << endl;
			cout << "플레이어1이 공격입니다." << endl;

			cout << "플레이어1 점수 : " << player1Score << endl;
			cout << "플레이어2 점수 : " << player2Score << endl;

			cin >> player1;

			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			
		}
		// 플레이어1이 질 경우
		else if (player1 == 0 && player2 == 1 ||
			     player1 == 1 && player2 == 2 ||
			     player1 == 2 && player2 == 0)
		{
			cout << "플레이어2가 이겼습니다!" << endl;

			cin >> player1;
			player2 = rand() % 3;

			cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
			cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것

			if (player1 == 0 && player2 == 0 ||
				player1 == 1 && player2 == 1 ||
				player1 == 2 && player2 == 2)
			{
				player2Score++;

				cout << "플레이어1 점수 : " << player1Score << endl;
				cout << "플레이어2 점수 : " << player2Score << endl;
			}
			// 플레이어1이 공격에 실패했을 경우1 (이겼을 때)
			else if (player1 == 0 && player2 == 2 ||
				player1 == 1 && player2 == 0 ||
				player1 == 2 && player2 == 1)
			{
				cout << "플레이어1 점수 : " << player1Score << endl;
				cout << "플레이어2 점수 : " << player2Score << endl;

				cin >> player1;
				player2 = rand() % 3;

				cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
				cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것
			}

			// 플레이어1이 공격에 실패했을 경우2 (졌을 때)
			else if (player1 == 0 && player2 == 1 ||
					 player1 == 1 && player2 == 2 ||
					 player1 == 2 && player2 == 0)
			{
				cout << "플레이어1 점수 : " << player1Score << endl;
				cout << "플레이어2 점수 : " << player2Score << endl;

				cin >> player1;
				player2 = rand() % 3;

				cout << "플레이어1이 낸 것 : " << player1 << endl; // 플레이어1이 낸 것
				cout << "플레이어2이 낸 것 : " << player2 << endl; // 플레이어2가 낸 것
			}
		}

		// 비길 경우
		else if (player1 == 0 && player2 == 0 ||
			     player1 == 1 && player2 == 1 ||
			     player1 == 2 && player2 == 2)
		{
			cout << "비겼습니다!" << endl;
			cout << endl;
		}
		else
		{
			cout << "잘못 입력하셨습니다." << endl;
		}
		// =========================가위 바위 보 끝, 묵찌빠 시작=============================================
		// 묵찌빠
		// 1. 가위바위보에서 이긴쪽이 먼저 시작
		// 2. 서로 같은 것(같은 수)를 내면 점수획득
		// 3. 서로 다른 것을 내면 이긴쪽이 다시 시작



		// ==================================묵찌빠 끝=======================================================

		if ((player1Score == 3) || (player2Score == 3)) // 누가됐든 3점을 먼저 획득하면
		{
			playing = false; // 종료
		}
	}
}