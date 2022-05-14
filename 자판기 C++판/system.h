#pragma once
#include <iostream>

using namespace std;

int coin1(int coin)
{
	int abc = 0;

	if (coin == 500) {
		cout << "사과주스가 나왔습니다. 안녕히 가세요 \n";
	}
	else if (coin >= 500) {
		cout << "사과주스가 나왔습니다. \n";
		abc = coin - 500;
		cout << "거스름돈은 " << abc << "원 입니다. \n";
	}
	else {
		cout << "잔액이 부족합니다. \n";
	}
	return abc;
}

int coin2(int coin)
{
	int abc = 0;

	if (coin == 700) {
		cout << "오렌지 주스가 나왔습니다. 안녕히 가세요 \n";
	}
	else if (coin >= 700) {
		cout << "오렌지 주스가 나왔습니다. \n";
		abc = coin - 700;
		cout << "거스름돈은 " << abc << "원 입니다. \n";
	}
	else {
		cout << "잔액이 부족합니다. \n";
	}

	return abc;
}

int coin3(int coin)
{
	int abc = 0;

	if (coin == 1200) {
		cout << "포도주스가 나왔습니다. 안녕히 가세요. \n";
	}
	else if (coin >= 1200) {
		cout << "포도주스가 나왔습니다. \n";
		abc = coin - 1200;
		cout << "거스름돈은 " << abc << "원 입니다. \n";
	}
	else {
		cout << "잔액이 부족합니다. \n";
	}

	return abc;
}