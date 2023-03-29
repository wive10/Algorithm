#include<iostream>
#include<string>
using namespace std;
int main() {
    string a;
    int sp[27] = { 0, };
    int max = 0;
    char spell = '?';
    
    cin >> a;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > 96) { sp[a[i] - 'a']++; }
        else { sp[a[i] - 'A']++; }
    }
    for (int i = 0; i < 27; i++) {
        if (max < sp[i]) {
            max = sp[i];
            spell = i + 'A';
        }
        else if (max == sp[i])spell = '?';
    }

    cout << spell<<endl;

    return 0;
}