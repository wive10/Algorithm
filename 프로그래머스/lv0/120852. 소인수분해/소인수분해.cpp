#include <vector>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
	float size = n;
	for (int i = 2; i <=size; i++) {
		if (n % i == 0) {
			answer.push_back(i);
			while (1) {
				if (n % i != 0) break;
				else n /= i;
			}
		}
	}
	return answer;
}