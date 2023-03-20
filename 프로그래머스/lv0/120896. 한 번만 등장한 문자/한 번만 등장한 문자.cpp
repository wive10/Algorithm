#include <string>
#include <vector>

using namespace std;

string solution(string s) {
   string answer = "";
    int check[26]={0,};
    for (int i = 0; i < s.size(); i++) {
        check[s[i] - 97] ++;
    }
    for (int i = 0; i <26; i++) {
        if(check[i]==1)
            answer+=i+97;
    }
    return answer;
}