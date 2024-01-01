#include <stdio.h>
int main(void) {
	int test, max, min, i, sum;
	scanf("%d", &test);

	max = -1000001;
	min = 1000001;
	sum = 0;
	for (i = 0; i < test; i++) {
		scanf("%d", &sum);
		if (max <sum)
			max = sum;
		if (min > sum)
			min = sum;

	}
	printf("%d %d", min, max);

	return 0;
}