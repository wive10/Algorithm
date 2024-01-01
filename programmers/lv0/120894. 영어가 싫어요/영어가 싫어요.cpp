#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;    
    for (int i = 0; i < numbers.size(); i++) {
        answer *= 10;
        switch (numbers[i]) {
        case 'z':
            i += 3;
            break;
        case 'o':
            answer += 1;
            i += 2;
            break;
        case 't':
            switch (numbers[i + 1]) {
            case 'w':
                answer += 2;
                i += 2;
                break;
            case 'h':
                answer += 3;
                i += 4;
                break;
            }
            break;
        case 'f':
            switch (numbers[i + 1]) {
            case 'o':
                answer += 4;
                i += 3;
                break;
            case 'i':
                answer += 5;
                i += 3;
                break;
            }
            break;
        case 's': 
            switch (numbers[i + 1]) {
            case 'i':
                answer += 6;
                i += 2;
                break;
            case 'e':
                answer += 7;
                i += 4;
                break;
            }
            break;
        case 'e':
            answer += 8;
            i += 4;
            break;
        case 'n':
            answer += 9;
            i += 3;
            break;
        }
    }
    return answer;
}