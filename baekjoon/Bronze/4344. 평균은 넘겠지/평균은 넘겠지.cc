#include <stdio.h>

int main() {
	
	int test,t,i;
	char ch;
	float a[1000], average, plus, per, count;

	scanf("%d", &test);

	while (test--) {
		average = 0.0;
		plus = 0.0;
		
        scanf("%d", &t);
		for (i = 0; i < t; i++) {
			scanf("%f", &a[i]);

			plus = plus + a[i];
		}average = plus / t;

		count = 0;
		for (i = 0; i < t; i++) {
			if (average < a[i]) {
				count++;
			}
		}per = (count / t) * 100;

		ch = '%';
		printf("%.3lf%c\n", per, ch);
	}
    return 0;
}