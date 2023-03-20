#include <string>
#include <vector>
 
using namespace std;

double solution(vector<int> numbers) {
    double answer;
    for(auto elem:numbers) answer += elem;
    return answer/numbers.size();
}