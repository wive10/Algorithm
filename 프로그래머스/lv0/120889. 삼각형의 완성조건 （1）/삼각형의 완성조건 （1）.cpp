#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int max = 0;
    int hap = 0;

    max = ((sides[0] > sides[1]) && (sides[0] > sides[2])) ? sides[0] : ((sides[1] > sides[0]) && (sides[1] > sides[2])) ? sides[1] : sides[2];
    hap = ((sides[0] > sides[1]) && (sides[0] > sides[2])) ? sides[1]+sides[2] : ((sides[1] > sides[0]) && (sides[1] > sides[2])) ? sides[0]+sides[2] : sides[0]+sides[1];

    if (max < hap)
        return 1;
    else
        return 2;
}