#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(auto elem:array){
        if(elem>height)
            answer++;
    }
    return answer;
}