#include <stdio.h>
int main() {
	int burger[3], drink[2], set=10000, temp;

	for (int i = 0; i < 3; i++) 
		scanf("%d", &burger[i]);

	for (int i = 0; i < 2; i++)
		scanf("%d", &drink[i]);

	for(int i=0;i<3;i++)
		for (int j=0; j < 2; j++) {
			temp = burger[i] + drink[j]-50;
			if (temp < set)
				set = temp;
		}

	printf("%d", set);

	return 0;
}