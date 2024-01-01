#include<stdio.h>

int main() {

	int  sum = 0, N;

	scanf("%d", &N);

	while (N > 0) {

		sum = sum + N;
		N--;
	 }
	
	printf("%d\n", sum);
	
	return 0;
}