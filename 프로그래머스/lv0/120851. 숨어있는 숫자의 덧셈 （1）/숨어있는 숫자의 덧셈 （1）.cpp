#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
	for (auto n : my_string)if (n >= 48 && n <= 57) answer += n-48;
    return answer;
}