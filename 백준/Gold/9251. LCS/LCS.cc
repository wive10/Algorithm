#include <iostream>
#include <string>
using namespace std;

int LCS[1001][1001] = { 0, };

int main() {
	string s1, s2;
	cin>> s1 >> s2;

	for (int i = 1; i < s1.size()+1; i++) {
		for (int j = 1; j < s2.size()+1; j++) {
			if (s1[i-1] == s2[j-1]) {
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			}
			else {
				LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
			}
		}
	}
	cout << LCS[s1.size()][s2.size()];
	return 0;
}