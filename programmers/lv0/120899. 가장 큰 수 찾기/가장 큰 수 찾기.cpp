#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = 0;
    int j = 0;
    for (int i = 0; i < array.size(); i++) {
        if (max < array[i]) {
            max = array[i];
            j = i;
        }
    }
    answer.push_back(max);
    answer.push_back(j);
    return answer;
}