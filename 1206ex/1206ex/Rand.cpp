#include "Rand.h"

void Rand::RPS()
{
	srand(GetTickCount64());
	cout << "���������� ����" << endl;

	// =============================���� ���� �� ����=========================================
	// ���� ���� ��
	// 1. �� �÷��̾ ��� ���� ���ϱ�
	// 2. �� �÷��̾ �������� ����, ����, �� �� �Ѱ��� ���� �� ���ϱ�
	// 3. �� �÷��̾ �̰��� ��, ���� ��, ����� ���� �����ؼ� ����

	// �÷��̾�1�� ������ ���� �÷��̾�2�� ������ ���ٰ� ġ��

	cout << "0~2 ���ڸ� �Է� ���ּ���.(ù��°)" << endl;
	cout << "(0 : ����, 1 : ����, 2 : ��)" << endl;

	cin >> player1;
	player2 = 2;

	cout << endl;

	while (playing1)
	{
		// �÷��̾�1�� �̱��
		if (player1 == 0 && player2 == 2)
		{
			cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
			cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

			cout << endl;

			cout << "player1�� �̰���ϴ�." << endl;

			cout << endl;

			player1Win = true; // �÷��̾�1�� �̱�������� true

			playing1 = false;
		}
		// �÷��̾�2�� �̱��
		else if (player1 == 1 && player2 == 2)
		{
			cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
			cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

			cout << endl;

			cout << "player2�� �̰���ϴ�." << endl;
			player1Win = false; // �÷��̾�1�� ���������� false

			playing1 = false;
		}
		// �÷��̾�1�� �÷��̾�2�� ����
		else if (player1 == player2)
		{
			cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
			cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

			cout << endl;

			cout << "�����ϴ�." << endl;
			cout << "�ٽ� �Է����ּ���." << endl;
			cin >> player1;
			player2 = 2;
		}
		else
		{
			cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
			cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

			cout << endl;

			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			cin >> player1;
			player2 = 2;
		}
	}
	
	// =============================���� ���� �� ��=========================================

	while (playing2)
	{
		// ���� ���� ���� 
		if (player1 == player2)
		{
			if (player1Win)
			{
				// �÷��̾�1�� ���� ȹ��
				cout << "����� �Ȱ��� ���� �½��ϴ�." << endl;
				cout << "������ 1�� ȹ���մϴ�." << endl;
				player1Score++;

				cout << endl;

				cout << "player1 ���� : " << player1Score << endl;
				cout << "player2 ���� : " << player2Score << endl;

				cout << "0~2 ���ڸ� �Է� ���ּ���.(�� ��°, �÷��̾�1�� �̱� ���)" << endl;
				cout << "(0 : ����, 1 : ����, 2 : ��)" << endl;

				// �÷��̾�1�� �̰����Ƿ� player1Win�� true�� �����ϰ�
				// �ٽ� ���� ���� �� ����
				cin >> player1;
				player2 = 2;

				cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
				cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

				cout << endl;
			}
			else if (!player1Win)
			{
				// �÷��̾�2�� ���� ȹ��
				cout << "����� �Ȱ��� ���� �½��ϴ�." << endl;
				cout << "������ 1�� ȹ���մϴ�." << endl;
				player2Score++;

				cout << endl;

				cout << "player1 ���� : " << player1Score << endl;
				cout << "player2 ���� : " << player2Score << endl;

				cout << "0~2 ���ڸ� �Է� ���ּ���.(�ټ� ��°, �÷��̾�1�� �̱� ���)" << endl;
				cout << "(0 : ����, 1 : ����, 2 : ��)" << endl;

				// �÷��̾�1�� �̰����Ƿ� player1Win�� true�� �����ϰ�
				// �ٽ� ���� ���� �� ����
				cin >> player1;
				player2 = 2;

				cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
				cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

				cout << endl;
			}
		}
		// �ٸ� ���� ���� ���1 (�÷��̾�1�� �̱� ���)
		else if (player1 == 0 && player2 == 2)
		{
			player1Win = true;

			cout << "0~2 ���ڸ� �Է� ���ּ���.(�� ��°, �÷��̾�1�� �̱� ���)" << endl;
			cout << "(0 : ����, 1 : ����, 2 : ��)" << endl;

			// �÷��̾�1�� �̰����Ƿ� player1Win�� true�� �����ϰ�
			// �ٽ� ���� ���� �� ����
			cin >> player1;
			player2 = 2;

			cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
			cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

			cout << endl;
		}

		// �ٸ� ���� ���� ���2 (�÷��̾�1�� �� ���)
		else if (player1 == 1 && player2 == 2)
		{
			player1Win = false;
			cout << "player2�� �̰���ϴ�." << endl;

			cout << endl;

			cout << "0~2 ���ڸ� �Է� ���ּ���.(����°, �÷��̾�2�� �̱� ���)" << endl;
			cout << "(0 : ����, 1 : ����, 2 : ��)" << endl;

			// �÷��̾�1�� �����Ƿ� player1Win�� false�� �����ϰ�
			// �ٽ� ���� ���� �� ����
			cin >> player1;
			player2 = 2;

			cout << "�÷��̾�1�� �� �� : " << player1 << endl; // �÷��̾�1�� �� ��
			cout << "�÷��̾�2�� �� �� : " << player2 << endl; // �÷��̾�2�� �� ��

			cout << endl;
		}

		if (player1Score == 3)
		{
			cout << "player1�� �¸��߽��ϴ�!!" << endl;
			playing2 = false; // ����
		}

		if (player2Score == 3)
		{
			cout << "player2�� �¸��߽��ϴ�!!" << endl;
			playing2 = false; // ����
		}
	}
}