#include <string>
#include<map>

using namespace std;

string solution(string rsp) {
	string answer = "";
	map<char, char> mp;
	
    mp['0'] = '5';
	mp['2'] = '0';
	mp['5'] = '2';

	for (char str : rsp)answer += mp[str];
    
    return answer;
}