#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer="";
    for(auto i : my_string)
        if(answer.find(i)==std::string::npos)answer+=i;
    return answer;
}