#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int count = 0;

	for (auto a : s1) {
		for (auto b : s2) {
			if (a == b)count++;
		}
	}
	return count;
}