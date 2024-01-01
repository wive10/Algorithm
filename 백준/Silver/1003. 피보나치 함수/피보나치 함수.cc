#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

int main() {
    int testcase;
    int fi[43] = { 0,1 };
    for (int i = 2; i < 43; i++) {
        fi[i] = fi[i - 2] + fi[i - 1];
    }

    cin >> testcase;
    while (testcase--) {
        int N = 0;
        cin >> N;   
        if(N ==0)cout <<1 << " " << 0<<endl;
        else cout << fi[N - 1] << " " << fi[N]<<endl;
    }
    return 0;
}