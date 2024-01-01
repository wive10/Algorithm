#include <string>
#include <vector>

#include<algorithm>
using namespace std;

vector<int> solution(string my_string) {
    	
    vector<int> answer;
    for (char i : my_string) {
        if (i>=48 && i<=57)answer.push_back(i - 48);
    } sort(answer.begin(), answer.end());

    return answer;
}