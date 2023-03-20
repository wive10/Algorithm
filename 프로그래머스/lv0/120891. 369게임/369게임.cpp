#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int cnt = 0;
    string orderS="";
    //order을 string으로 변환
    orderS = to_string(order);
    //string 반복문을 돌려 문자 하나씩 확인 cnt++
    for (auto s : orderS) {
        if (s == '3' || s == '6' || s == '9') cnt++;
    }
    return cnt;
}