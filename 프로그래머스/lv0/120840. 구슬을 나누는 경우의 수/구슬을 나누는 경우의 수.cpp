using namespace std;

long solution(int balls, int share) {
    long answer = 1;
    for (int i = 1; i <= share; i++) {
        answer = answer*balls--/i;
    }
    return answer;
}