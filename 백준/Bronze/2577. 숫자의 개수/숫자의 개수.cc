#include<stdio.h>
int main() {
	int num, sum, i, cn[10] = {0};

	sum = 1;
	for (i = 0; i < 3; i++) {
		scanf("%d", &num);
		sum *= num;
	}

	while (sum != 0) {
		cn[sum % 10] += 1;
		sum=sum / 10;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n",cn[i]);
	}
	
	return 0;
}