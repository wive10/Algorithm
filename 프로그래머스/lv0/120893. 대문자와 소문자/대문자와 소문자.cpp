#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    //my_string 크기만큼 돌림 
    for (int i = 0; i < my_string.size();i++) {
        //요소가 a~z 사이에 있다면 - 32
        if (my_string[i] >= 'a' && my_string[i] <= 'z') my_string[i] -= 32;
        //요소가 A~Z 사이에 있다면 + 32
        else if (my_string[i] >= 'A' && my_string[i] <= 'Z') my_string[i] += 32;
    }
    
    return my_string;
}
