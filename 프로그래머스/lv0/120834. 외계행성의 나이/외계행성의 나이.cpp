#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = to_string(age);
	int size = answer.length();
	
	string bi = "";
	for (int i = 0; i < size; i++) {
		switch (answer[i]-48) {
			case 0:bi = "a";
				break;
			case 1:bi = "b";
				break;
			case 2:bi = "c";
				break;
			case 3:bi = "d";
				break;
			case 4:bi = "e";
				break;
			case 5:bi = "f";
				break;
			case 6:bi = "g";
				break;
			case 7:bi = "h";
				break;
			case 8:bi = "i";
				break;
			case 9:bi = "j";
				break;			
		}
		answer.replace(i, 1, bi);
	}
    return answer;
}