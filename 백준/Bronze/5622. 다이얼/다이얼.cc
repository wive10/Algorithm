#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int time = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')time+=2;
		else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')time += 3;
		else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')time += 4;
		else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')time += 5;
		else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')time += 6;
		else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')time += 7;
		else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')time += 8;
		else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')time += 9;
	}
	cout << time+s.length();
	return 0;
}