#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str = "";
    int size = 0;

    for (int i = 0; s[i] != 0; i++)
        if (s[i] == ' ') size++;
    
    for (int i = 0; i <= size; i++) {
        if (s.find(' ') != string::npos && s[0] != 'Z') {
            str = s.substr(0, s.find(' ')); 
            answer = answer + stoi(str);
        }else if (s[0] != 'Z') {
            str = s; answer = answer + stoi(str);
        }if (s[0] == 'Z')answer = answer - stoi(str);
       s.erase(0, s.find(' ')+1);
    }

    return answer;
}