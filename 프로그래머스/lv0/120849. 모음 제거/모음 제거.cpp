#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
   for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] == 'a' || my_string[i] == 'e' || my_string[i] == 'i' || my_string[i] == 'o' || my_string[i] == 'u')
            my_string.erase(i--, 1);
    } return my_string;
    return my_string;
}