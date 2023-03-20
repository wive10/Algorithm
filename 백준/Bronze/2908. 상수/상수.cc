#include<iostream>
using namespace std;
int back(int num) {
	if (num == 0) return 0;
	cout << num % 10;
	return back((num - num % 10) / 10);
}
int Big(int num1, int num2) {
	if (num1 % 10 > num2 % 10) return 1;
	else if (num1 % 10 < num2 % 10) return 0;
	else return Big((num1 - num1 % 10) / 10, (num2 - num2 % 10) / 10);
}

int main() {
	int A, B;
	bool big=0;
	cin >> A >> B;
	big = Big(A, B);
	if (big) back(A);
	else back(B);
	return 0;
}