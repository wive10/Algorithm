#include <stdio.h>

int main() {
	int a = 0, b = 0, test;

	scanf("%d", &test);
	while (test--) {
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}