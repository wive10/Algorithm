#include<map>
using namespace std;
int solution(int n) {
	map<int,int> mp;
	mp[10] =3628800;
	mp[9] = 362880;
	mp[8] = 40320;
	mp[7] = 5040;
	mp[6] = 720;
	mp[5] = 120;
	mp[4] = 24;
	mp[3] = 6;
	mp[2] = 2;
	mp[1] = 1;
	for (int i = 1; i < 11; i++) {
		if (mp[i] == n || (n<mp[i + 1] && n>mp[i]))return i;
	}
}