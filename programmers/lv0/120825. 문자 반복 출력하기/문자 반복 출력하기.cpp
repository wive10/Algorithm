#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(int elem:my_string)answer.append(n,elem);
    return answer;
}