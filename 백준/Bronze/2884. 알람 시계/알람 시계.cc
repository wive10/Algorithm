#include<stdio.h>

int main() {

	int H, M;

	scanf("%d %d", &H, &M);

	M -= 45;

	if (59 < M) {
		H += 1;
		M -= 60;
	}
	
	if (M < 0) {
		M += 60;
		H -= 1;
	}

	if (24 < H) {
		H -= 24;
	}
	
	if (H < 0) {
		H += 24;
	}

	printf("%d %d", H, M);

	return 0;
}