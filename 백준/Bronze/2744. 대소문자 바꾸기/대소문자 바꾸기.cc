#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] > 94)
			printf("%c", s[i] - 32);
		else
			printf("%c", s[i] + 32);
	}
	return 0;
}
