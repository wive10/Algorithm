#include <string>
#include<map>
#include<sstream>

using namespace std;

string solution(string letter) {
    string mos[26] = {" .- "," -... "," -.-. "," -.. "," . "," ..-. "
		," --. "," .... ", " .. ", " .--- ", " -.- ", " .-.. ", " -- ",
		" -. ", " --- ", " .--. ", " --.- ", " .-. ", " ... ", " - ",
		" ..- ", " ...- ", " .-- ", " -..- ", " -.-- ", " --.. " };
	
    map<string, char> mp;
	stringstream ss(letter);
	string str = "";
	string answer = "";
	char a = 97;

	for (int i=0; i < 26; i++) {
		mp.insert({ mos[i],a++ });
	}
	while (ss >> str) {
		answer += mp[" "+str+" "];
	}
    return answer;
}