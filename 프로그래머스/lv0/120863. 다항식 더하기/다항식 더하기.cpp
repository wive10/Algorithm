#include <string>
#include <vector>

using namespace std;

string solution(string p) {
    if (p[0] == 'x')p = "1" + p;
    else p = "0" + p;

    string answer = "";
    int aa = 0;
    string s_num;
    int xx = 0;
    // p[i]로 받아서 숫자이면 x에 저장하고 +면 aa에 저장 및 초기화 x면 xx에 저장 및 초기화 
    for (int i = 0; i < p.size(); i++) {
        //  숫자일 때,  x에 저장
        if (48 <= p[i] && p[i] <= 57) {
            // 마지막일 때,
            if (i == (p.size() - 1)) {
                s_num += p[i];
                aa += stoi(s_num);
            }
            // 아닐 때,
            else s_num += p[i];
        }
        else if (p[i] == '+') {
            //x일 때,
            if (p[i - 2] == 'x') {
                //s_num이 없을 때,
                if (s_num == "0")
                    s_num = "1";
                xx += stoi(s_num);
            }

            //숫자일 때
            else aa += stoi(s_num);
            s_num = '0';
        }
        else if (i == (p.size() - 1)) {
            //s_num이 없을 때,
            if (p[i] == 'x') {
                if (s_num == "0")
                    s_num = "1";

                //마지막일 때,
                s_num += p[i];
                xx += stoi(s_num);
            }
            else {
                s_num += p[i];
                aa += stoi(s_num);
            }
        }
    }
    if (xx == 0 && aa > 0) { return to_string(aa); }
    if (xx > 1 && aa == 0) { return to_string(xx) + "x"; }
    if (xx == 1 && aa == 0) { return "x"; }
    if (xx > 1 && aa > 0) { return to_string(xx) + "x + " + to_string(aa); }
    if (xx == 1 && aa > 0) { return "x + " + to_string(aa); }
}