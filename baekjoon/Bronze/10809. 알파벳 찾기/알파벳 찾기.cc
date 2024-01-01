#include<iostream>
#include<cstring>

using namespace std;

int main() {

	// 환경 : 소문자로 이루어진 단어를 기입한다.
	// 조건 : 첫째 줄에 단어가 입려된다. 이 단어의 길이는 100을 넘지않는다.
	// 출력 1. 단어가 포함이 되어있지 않다면 -1을 출력한다. 
	// 주의 사항 : 첫번째 글자는 0, 두번째 글자는 1인 식으로 값을 넣는다.

	// 풀이 과정 : 문자를 기입하고, 해당 글자에 자리에 좌표를 지정해준다. hello 에서 h = 0, -> h-94의 자리에 0

	//문자기입
	char word[101];
	int num[26]={0, };
	
	cin >> word;

	for (int i = 0; i < 26; i++) {
			num[i] = -1;
	}
	// 글자의 자리에 좌표 지정
	for (int i = 0; i < strlen(word); i++) {
		if (num[word[i] - 'a'] == -1)
			num[word[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << num[i] << " ";
	}

	return 0;
}