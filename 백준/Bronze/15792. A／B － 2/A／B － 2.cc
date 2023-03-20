#include <stdio.h>

int main() {
	int A, B, i, sosu, gungsu ;
		
	scanf("%d %d", &A, &B);

	gungsu = A / B;
	printf("%d.", gungsu);

	sosu = A % B;
	for (i = 0; i < 32; i++) {
		if (!sosu) break;
		sosu *= 10;
		printf("%d", sosu / B);
		sosu = sosu % B;
	}
	return 0;
}