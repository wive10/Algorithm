#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(1);
     for (int i = 1; i <= n / 2; i++){
        answer.push_back(i * 2 + 1);
    }
    if (n % 2 == 0) answer.pop_back();
    return answer;
}