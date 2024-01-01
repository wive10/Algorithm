#include<iostream>
using namespace std;

int main() {
	double M = 0, sum = 0;
	double score[1001] = { 0, };
	int num;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> score[i];
		if (M < score[i]) M = score[i];
	}

	for (int i = 0; i < num; i++) {
		score[i] = score[i] / M * 100;
		sum += score[i];
	}
	cout << sum / num << endl;
	return 0;
}