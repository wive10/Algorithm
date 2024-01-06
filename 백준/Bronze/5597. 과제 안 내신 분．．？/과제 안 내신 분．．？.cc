#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	string s = "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 ";
	int nPos;
	
	for (int i = 0; i < 28; i++) {
		cin >> a;
		nPos = s.find(a + " ");
		if (nPos != string::npos) {
			s.erase(nPos, a.size() + 1);
		}
	}
	cout << s;
	return 0;
}
