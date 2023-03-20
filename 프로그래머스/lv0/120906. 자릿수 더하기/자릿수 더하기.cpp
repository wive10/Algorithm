#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 0; i < n; i / 10) {
        answer += n % 10;
        n = n / 10;
    }
    return answer;
}