#include <stdio.h>

int main() {
	int a = 0, b = 0, test, i;

	scanf("%d", &test);
	for (i = 0; i < test; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i+1, a, b, a + b);
	}
	return 0;
}