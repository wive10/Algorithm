#include <iostream>
#include <string>
using namespace std;
int main() {
	int a, b;
	
	cin >> a >> b;
	int** arr1;
	arr1 = new int* [a];
	for (int i = 0; i < a; i++) arr1[i] = new int[b];

	int** arr2;
	arr2 = new int* [a];
	for (int i = 0; i < a; i++) arr2[i] = new int[b];


	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> arr1[i][j];
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> arr2[i][j];
		}
	}


	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr1[i][j] += arr2[i][j];
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout<< arr1[i][j]<<" ";
		}
		cout << endl;
	}


	return 0;
}
