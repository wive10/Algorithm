#include<stdio.h>

int main() {

	int t,i,j;

	scanf("%d", &t);
	for (i = 0; i < t;i++) {
		for(j=0;j<=i;j++)
		printf("*");
		
		printf("\n");
	 }
    return 0;
}