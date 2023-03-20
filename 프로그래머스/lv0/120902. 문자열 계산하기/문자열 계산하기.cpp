#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    
    int sum = 0;
    string su = "";
    char ho = '+';
    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] > 47) {
            su += my_string[i];

            if (i == my_string.size() - 1) {
                if (ho == '+')     sum += stoi(su);
                else if (ho == '-')sum -= stoi(su);
            }
        }
        else if (my_string[i] == ' '&& su!="") {
            if (ho == '+')     sum += stoi(su);
            else if (ho == '-')sum -= stoi(su);

            ho = ' ';
            su = "";
        }
        else if(my_string[i] != ' ') ho = my_string[i];
}
    return sum;}