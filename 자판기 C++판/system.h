#pragma once
#include <iostream>

using namespace std;

int coin1(int coin)
{
	int abc = 0;

	if (coin == 500) {
		cout << "����ֽ��� ���Խ��ϴ�. �ȳ��� ������ \n";
	}
	else if (coin >= 500) {
		cout << "����ֽ��� ���Խ��ϴ�. \n";
		abc = coin - 500;
		cout << "�Ž������� " << abc << "�� �Դϴ�. \n";
	}
	else {
		cout << "�ܾ��� �����մϴ�. \n";
	}
	return abc;
}

int coin2(int coin)
{
	int abc = 0;

	if (coin == 700) {
		cout << "������ �ֽ��� ���Խ��ϴ�. �ȳ��� ������ \n";
	}
	else if (coin >= 700) {
		cout << "������ �ֽ��� ���Խ��ϴ�. \n";
		abc = coin - 700;
		cout << "�Ž������� " << abc << "�� �Դϴ�. \n";
	}
	else {
		cout << "�ܾ��� �����մϴ�. \n";
	}

	return abc;
}

int coin3(int coin)
{
	int abc = 0;

	if (coin == 1200) {
		cout << "�����ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n";
	}
	else if (coin >= 1200) {
		cout << "�����ֽ��� ���Խ��ϴ�. \n";
		abc = coin - 1200;
		cout << "�Ž������� " << abc << "�� �Դϴ�. \n";
	}
	else {
		cout << "�ܾ��� �����մϴ�. \n";
	}

	return abc;
}