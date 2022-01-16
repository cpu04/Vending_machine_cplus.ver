#include <iostream>

using namespace std;

int main(void)
{
	while (1) {
		int coin = 0;
		int ans = 0;
		int abc = 0;

		cout << "금액을 입력해주세요 \n";
		cin >> coin;

		cout << "음료를 선택해주세요. \n 1. 사과주스 : 500원, 2. 오렌지 주스 : 700원, 3. 포도 주스 : 1200원 \n";
		cin >> ans;

		switch (ans) {
		case 1:
			if (coin == 500) {
				cout << "사과주스가 나왔습니다. 안녕히 가세요 \n";
				continue;
			}
			else if (coin >= 500) {
				cout << "사과주스가 나왔습니다. \n";
				abc = coin - 500;
				cout << "거스름돈은 " << abc << "원 입니다. \n";
				continue;
			}
			else {
				cout << "잔액이 부족합니다. \n";
				continue;
			}
		case 2:
			if (coin == 700) {
				cout << "오렌지 주스가 나왔습니다. 안녕히 가세요 \n";
				continue;
			}
			else if (coin >= 700) {
				cout << "오렌지 주스가 나왔습니다. \n";
				abc = coin - 700;
				cout << "거스름돈은 " << abc << "원 입니다. \n";
				continue;
			}
			else {
				cout << "잔액이 부족합니다. \n";
				continue;
			}
		case 3:
			if (coin == 1200) {
				cout << "포도주스가 나왔습니다. 안녕히 가세요. \n";
				continue;
			}
			else if (coin >= 1200) {
				cout << "포도주스가 나왔습니다. \n";
				abc = coin - 1200;
				cout << "거스름돈은 " << abc << "원 입니다. \n";
				continue;
			}
			else {
				cout << "잔액이 부족합니다. \n";
				continue;
			}
		default:
			cout << "잘못된 값입니다. \n";
			continue; 
		}
		return 0;
	}
}