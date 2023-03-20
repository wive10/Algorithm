#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int elem: numbers)answer.push_back(elem*2);
    return answer;
}