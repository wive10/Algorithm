#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    //gap = 가장 작은 두 수의 간격
    int gap = abs(n - array[0]);
    //answer = 가장 작은 두 수의 간격을 가진 array 원소
    int answer = array[0];

    //a = array 원소
    for (auto a : array) {
        
        //가장 작은 두 수의 간격이 절댓값보다 크다면
        if (gap > abs(a - n)) {
            //그 절댓값은 가장 작은 두 수의 간격이다.
            gap = abs(a - n);
            //바뀐 간격에 따라 해당하는 원소도 바뀐다.
            answer = a;
        }
        //가장 작은 두 수의 간격이 같다면
        else if (gap == abs(a - n))
            //answer와 a를 비교해 a가 큰것이 참이면 answer이 answer, 거짓이면 a가 answer
            answer = (answer < a) ? answer : a;
    }
    //리턴
    return answer;
}