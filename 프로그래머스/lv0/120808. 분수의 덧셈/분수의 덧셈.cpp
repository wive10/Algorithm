#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int denom = denom1 * denom2;
    int numer = numer1 * denom2 + numer2 * denom1;
    int big = (denom < numer) ? numer : denom;
    int small = (denom < numer) ? denom : numer;
    int r;
    while (small!=0) {
        r = big % small;
        big = small;
        small = r;
    }
    answer.push_back(numer / big);
    answer.push_back(denom / big);    
    return answer;
}