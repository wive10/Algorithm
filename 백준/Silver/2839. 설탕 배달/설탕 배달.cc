#include<iostream>
using namespace std;
int main() {
	
	int n, cnt=0,num=0; cin >> n;
	for (int i = n / 5; i > 0; i--)
		if ((n - (5 * i)) % 3 == 0) {
			num = i;
			break;
		}
	for (int j = 0; j < num; j++){
		n -= 5;
		cnt++;
	}
	for (n; n >= 3; n -= 3) 
		cnt++;
	if (n == 0) {
		cout << cnt;}
	else {	
		cout << -1;}
	return 0;
}