#include<iostream>

using namespace std;

int main() {
	int aA[10] = { 0, }, bB = 42, na[42] = { 0, }, count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> aA[i];
		na[aA[i] % bB]++;
	}
	for (int i = 0; i < bB; i++) {
		if (na[i] > 0)
			count++;
	}
	cout << count;

	return 0;
}