#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    switch (num % 2) {
	case 0: return "Even";
	case 1: return "Odd";
    }
}