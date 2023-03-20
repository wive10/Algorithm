#include<cmath>

using namespace std;

int solution(int n) {
  int temp;
   switch (n & 0x0f) {
    case 0:
    case 1:
    case 4:
    case 9:
        temp = (int)(sqrt((double)n));
        return (temp*temp==n)?1:2 ;
    default:
        return 2;
    }
}