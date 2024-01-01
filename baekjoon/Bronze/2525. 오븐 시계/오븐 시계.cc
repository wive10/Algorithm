#include<iostream>

using namespace std;

int main() {
	int A, B, C, hour, min;

	cin >> A >> B;
	cin >> C;
	
	hour = (B + C)/ 60 + A;
	min = (B + C) % 60;
	if  (hour >= 24) hour = hour - 24*(hour/24);
	
	cout << hour << " " << min;

	return 0;
}