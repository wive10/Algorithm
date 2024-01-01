#include <stdio.h>

int main() {
	int num, count, sum;

	scanf("%d", &num);
	sum = num % 10 * 10 + (num / 10 + num % 10) % 10;

	count = 1;
    while (num !=sum) {

		sum = sum % 10 * 10 + (sum / 10 + sum % 10) % 10;
		count++;
	}printf("%d", count);

	return 0;
}