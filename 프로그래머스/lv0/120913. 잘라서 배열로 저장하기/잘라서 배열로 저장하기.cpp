#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int size;
    if (my_str.size() % n == 0)size = my_str.size() / n;
    else size = my_str.size() / n+1;

    for (int i = 0; i < size;i++) {
       answer.push_back(my_str.substr(n*i, n));
    }
    return answer;
}