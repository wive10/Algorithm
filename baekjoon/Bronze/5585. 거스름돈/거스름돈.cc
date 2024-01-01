#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int coin;
    int cnt = 0;
    int yen[6] = { 500, 100, 50, 10, 5, 1 };
    int i = 0;

    cin >> coin;
    coin = 1000 - coin;


    while (coin != 0) {
      
        if (coin < yen[i]) {
            i++;
            continue;
        }
        else {
            coin = coin - yen[i];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}