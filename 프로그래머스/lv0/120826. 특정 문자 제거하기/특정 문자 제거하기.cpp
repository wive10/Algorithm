#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
   while (1) {
		if (my_string.find(letter)!=string::npos)
			my_string.replace(my_string.find(letter),1, "");
		else break;
	}
    return my_string;
}