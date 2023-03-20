#include<iostream>
#include<string>
using namespace std;

int main() {
	string word;
	int num = 0;
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> word;
		int spell[32] = { 0, };
		for (int i = 0; i < word.length(); i++) {
			spell[(int)word[i] - 97]++;
			if (spell[(int)word[i] - 97] > 1)	// 1보다 커질 때
			{;
				if (word[i - 1] != word[i]) {	// 그 스펠링을 처음 가진 자의 앞에 있는가?
					num++;
					break;						// 단어 확인 작업 끝내기
				}
			}
		}
	}
	cout <<testcase - num;
	return 0;
}