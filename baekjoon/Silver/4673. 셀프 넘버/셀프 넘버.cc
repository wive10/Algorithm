#include<iostream>
using namespace std;
#define SIZE 10001
int arr[SIZE] = { 0, };
int num;
int sum(int num, int d) {
	if (num == 0)
		return 0;
	else
		return num % d + sum((num - num % d) / 10, d);
}
int main(){
	int d = 10;
	for (int i = 1; i < SIZE; i++)
	{
		int result = i + sum(i, d);
		arr[result] = 1;
	}

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] != 1) cout << i << endl;
	}
	return 0;
}