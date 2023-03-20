#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int arr[4] = { 0,1,2,3 };
    for (int i = 0; i < 4; i++) {
       if((dots[arr[0]][1] - dots[arr[1]][1]) / (dots[arr[0]][0] - dots[arr[1]][0])+ (dots[arr[0]][1] - dots[arr[1]][1]) % (dots[arr[0]][0] - dots[arr[1]][0]) == (dots[arr[2]][1] - dots[arr[3]][1]) / (dots[arr[2]][0] - dots[arr[3]][0])+ (dots[arr[2]][1] - dots[arr[3]][1]) % (dots[arr[2]][0] - dots[arr[3]][0])) return 1;
       rotate(arr + 1, arr + 2, arr + 4);
    }
    return 0;
}