#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; 
	cin >> s;
	if (s[0] == 'A') {
		if (s[1] == '+') cout << "4.3";
		if (s[1] == '0') cout << "4.0";
		if (s[1] == '-') cout << "3.7";
	}
	else if (s[0] == 'B') {
		if (s[1] == '+') cout << "3.3";
		if (s[1] == '0') cout << "3.0";
		if (s[1] == '-') cout << "2.7";
	}
	else if (s[0] == 'C') {
		if (s[1] == '+') cout << "2.3";
		if (s[1] == '0') cout << "2.0";
		if (s[1] == '-') cout << "1.7";
	}
	else if (s[0] == 'D') {
		if (s[1] == '+') cout << "1.3";
		if (s[1] == '0') cout << "1.0";
		if (s[1] == '-') cout << "0.7";
	}
	else if (s[0] == 'F') {
		cout << "0.0";
	}
	return 0;
}
