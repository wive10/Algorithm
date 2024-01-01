#include<iostream>
using namespace std;

int main() {
	int x, count = 0;
	int num1, num2, num3;
	cin >> x;
	for(int i=1; i<=x; i++){
		if (i < 100)count++;
		else if (i / 1000 == 0) {
			num1 = i % 10;
			num2 = i / 10 % 10;
			num3 = i / 10 / 10 % 10;
			if ((num3 - num2) == (num2 - num1)) count++;
		}
		else break;
	}
	cout << count++;
	return 0;
}