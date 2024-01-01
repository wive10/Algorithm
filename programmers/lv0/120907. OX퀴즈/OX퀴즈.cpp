#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    vector<string> z={"","","","",""};
    char oprt='+';
    int cnt=0;
    for (int i = 0; i < quiz.size(); i++) {
        for (int j = 0; j < quiz[i].size(); j++) {
            
            if (quiz[i][j] == '+' || (quiz[i][j] == '-' && quiz[i][j + 1] == ' ') || quiz[i][j] == '=') {
                cnt += 1;
                z[cnt].push_back(quiz[i][j]);
                cnt += 1;
            }
            else if ((quiz[i][j] >= '0' && quiz[i][j] <= '9')|| quiz[i][j] == '-') {
                z[cnt].push_back(quiz[i][j]);
            }
        }
        if (z[1] == "+")(stoi(z[0]) + stoi(z[2]) == stoi(z[4])) ? answer.push_back("O") : answer.push_back("X");
        if (z[1] == "-")(stoi(z[0]) - stoi(z[2]) == stoi(z[4])) ? answer.push_back("O") : answer.push_back("X");
        z={ "","","","","" };
        cnt=0;
    }
    return answer;
}