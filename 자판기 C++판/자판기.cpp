#include <iostream>

using namespace std;

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

		switch (ans) {
		case 1:
			if (coin == 500) {
				cout << "����ֽ��� ���Խ��ϴ�. �ȳ��� ������ \n";
				continue;
			}
			else if (coin >= 500) {
				cout << "����ֽ��� ���Խ��ϴ�. \n";
				abc = coin - 500;
				cout << "�Ž������� " << abc << "�� �Դϴ�. \n";
				continue;
			}
			else {
				cout << "�ܾ��� �����մϴ�. \n";
				continue;
			}
		case 2:
			if (coin == 700) {
				cout << "������ �ֽ��� ���Խ��ϴ�. �ȳ��� ������ \n";
				continue;
			}
			else if (coin >= 700) {
				cout << "������ �ֽ��� ���Խ��ϴ�. \n";
				abc = coin - 700;
				cout << "�Ž������� " << abc << "�� �Դϴ�. \n";
				continue;
			}
			else {
				cout << "�ܾ��� �����մϴ�. \n";
				continue;
			}
		case 3:
			if (coin == 1200) {
				cout << "�����ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n";
				continue;
			}
			else if (coin >= 1200) {
				cout << "�����ֽ��� ���Խ��ϴ�. \n";
				abc = coin - 1200;
				cout << "�Ž������� " << abc << "�� �Դϴ�. \n";
				continue;
			}
			else {
				cout << "�ܾ��� �����մϴ�. \n";
				continue;
			}
		default:
			cout << "�߸��� ���Դϴ�. \n";
			continue; 
		}
		return 0;
	}
}