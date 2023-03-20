#include <string>
#include<algorithm>
#include<cmath>
int solution(int n) {
    int count = 0;
    for (int j = 1; j <= n; j++) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (i!=j&&j % i == 0) {
                count++;
                break;
            }
        }
    }
    return count;
}