#include<iostream>
using namespace std;
int f(int n);

int main() {
	//f(n) = f(n-3) + f(n-2) + f(n-1)
	int n, testcase;
	cin >> testcase;
	while (testcase) {
		cin >> n;
		cout << f(n)<<endl;
		testcase--;
	}

	return 0; 
}
int f(int n) {
	if (n == 3) {
		return 4;
	}
	else if (n == 2) {
		return 2;
	}
	else if (n == 1) {
		return 1;
	}

	return f(n - 3) + f(n - 2) + f(n - 1);
}