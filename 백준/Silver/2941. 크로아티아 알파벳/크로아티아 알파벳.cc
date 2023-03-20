#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int num = 1;
	cin >> s; 
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '=') {
			if		(s[i - 1] == 'z' && i >= 2)								{ if (s[i - 2] == 'd')num--; }
			else if (s[i - 1] == 'z' || s[i - 1] == 'c' || s[i - 1] == 's') {}
			else                                                            {}
		}
		else if (s[i] == '-'){
			if (s[i - 1] == 'c' || s[i - 1] == 'd') {}
			else									{}
		}
		else if (s[i] == 'j') {
			if (s[i - 1] == 'n' || s[i - 1] == 'l') {}
			else num++;
		}
		else num++;
	}
	cout << num;
	return 0;
}