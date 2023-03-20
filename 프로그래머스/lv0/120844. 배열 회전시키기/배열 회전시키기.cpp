#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int a = 0;
    int nS =numbers.size();
    if (direction == "right") {
        //오른쪽으로 한칸
        for (int i = 0; i < nS; i++) {
            a = numbers.back();
            numbers.back() = numbers[i];
            numbers[i] = a;
        }
    }
    if (direction == "left") {
        //왼쪽으로 한칸
        for (int i = 0; i < nS; i++) {
            a = numbers.front();
            numbers.front() = numbers[nS-i-1];
            numbers[nS - i - 1] = a;
        }
    }
    return numbers;
}