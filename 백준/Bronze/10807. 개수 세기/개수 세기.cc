#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	int V;
	int input;
	int arr[201]={0,};

	//N입력, N번 돌림
	cin >> N;
	while (N--) {
		cin >> input;
		arr[100 + input] +=1;
	}
	//v입력,N번 돌림
	cin >> V;
	cout << arr[V+100];

	return 0;
}