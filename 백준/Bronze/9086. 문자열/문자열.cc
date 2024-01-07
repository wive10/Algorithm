#include <iostream>
#include <string>
using namespace std;
int main() {
	int ts;
	cin >> ts;
	while (ts--) {
		string s;
		cin >> s;
		cout << s.front() << s.back()<<endl;
	}
	return 0;
}
