#include<stdio.h>

int main() 
{
	int t=0,i=0,j=0;

	scanf("%d", &t);
	for (i = 1; i <= t;i++) {
		
		for (j = 1; j <= t; j++)
			if (j <= t - i) printf(" ");
			else printf("*");
		
		printf("\n");
	 }
	return 0;
}