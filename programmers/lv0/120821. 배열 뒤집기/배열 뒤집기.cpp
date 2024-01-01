#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) {
    int n = num_list.size();
    reverse(num_list.begin(), num_list.begin() + n);
    return num_list;
}