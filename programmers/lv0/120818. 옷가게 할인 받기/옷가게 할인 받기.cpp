#include<algorithm>
#include <math.h>

using namespace std;

int solution(int price) {
    int answer = 0;
    if (price < 100000) answer = price;
	if (price >= 100000) { answer = trunc(price* 0.95); }
	if (price >= 300000) { answer = trunc(price * 0.9); }
	if (price >= 500000) { answer = trunc(price * 0.8); }
    return answer;
}