#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    return string(my_string.rbegin(), my_string.rend());
}