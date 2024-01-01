#include <stdio.h>
int main() {
	int A, B,i, ii, iii, sum;

	scanf("%d %d", &A, &B);

	sum = B;
	i = (sum / 100);
	sum = sum - i*100;
	ii = (sum / 10);
	iii =  sum - ii * 10;
	
	printf("%d\n", A * iii);
	printf("%d\n", A * ii);
	printf("%d\n", A * i);
	printf("%d\n", A * B);

	return 0;

}