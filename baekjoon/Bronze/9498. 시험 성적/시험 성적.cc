#include<stdio.h>
int main() {
	int score;

	scanf("%d", &score);

	if (100 == score)
		printf("A");

	else if (score >= 60) {
		for (int i = 9; i > 5; i--) {
			if (score / 10 == i)
				printf("%c", 74-i);
		}
	}
	else
		printf("F");

	return 0;
}