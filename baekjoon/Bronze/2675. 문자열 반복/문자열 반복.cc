
#include<iostream>
#include<string>
using namespace std;
int main() {
    int testcase;

    cin >> testcase;
    while (testcase--) {

        int num;
        string a;
        cin >> num >> a;

        for (int j = 0; j < a.length(); j++) {
            for (int i = 0; i < num; i++) {
                cout << a[j];
            }
        }
        cout << endl;
    }

    return 0;
}