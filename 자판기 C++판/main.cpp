#include "system.h"

int main(void)
{
	while (1) {
		int coin = 0;
		int ans = 0;
		int abc = 0;

		cout << "�ݾ��� �Է����ּ��� \n";
		cin >> coin;

		cout << "���Ḧ �������ּ���. \n 1. ����ֽ� : 500��, 2. ������ �ֽ� : 700��, 3. ���� �ֽ� : 1200�� \n";
		cin >> ans;

		if (ans == 1) {
			coin1(coin);
		}
		else if (ans == 2) {
			coin2(coin);
		}
		else if (ans == 3) {
			coin3(coin);
		}
		else {
			cout << "�߸��� ���Դϴ�. \n";
		}
	}
	return 0;
}