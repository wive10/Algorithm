#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> speak = { "aya","ye","woo","ma" };
    int answer = 0;
    int n;
 
    for (int i = 0; i < babbling.size(); i++) {
        for (int j = 0; j < speak.size(); j++) {
            n = babbling[i].find(speak[j]);
            if (n != string::npos)babbling[i]=babbling[i].replace(n,speak[j].length(), " ");
        }
    }
    for (int i = 0; i < babbling.size(); i++) {
       babbling[i].erase(remove(babbling[i].begin(), babbling[i].end(), ' '), babbling[i].end());
       if (babbling[i].empty() == 1) { answer++;}
    }
    return answer;
}