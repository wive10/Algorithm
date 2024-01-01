#include <string>

using namespace std;

int solution(int num, int k) {
    if (to_string(num).find(char(k) + '0')==string::npos) return -1;
    return to_string(num).find(char(k) + '0')+1;
}