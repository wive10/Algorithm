#include <string>
#include <vector>
#include<algorithm>

using namespace std;

string solution(string s) {
    vector<int> p;
    string ss = "";

    for (int i = 0; i < s.size(); i++) {
        
        if (s[i] != ' ') {
            ss += s[i];
        } 
        else{
            p.push_back(stoi(ss));
            ss = "";
        }
    }p.push_back(stoi(ss));

    sort(p.begin(), p.end());
    return to_string(p.front()) + " " + to_string(p.back());
}