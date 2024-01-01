#include<stdio.h>
int main() {

	int i, sum, max=0,n;

	for (i = 0; i < 9; i++) {
		scanf("%d", &sum);
		
		if (sum > max) {
			max = sum;
			n = i;
		}
	}
	printf("%d\n%d\n", max, n+1);

	return 0;
}