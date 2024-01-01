#include<stdio.h>

int main() {

	int x, y;

	scanf("%d", &x);
	scanf("%d", &y);


	if (0 < x )
	{
		if (y < 0)
			printf("4");
		else
			printf("1");

	}

	else
	{
		if (y < 0)
			printf("3");
		else 
			printf("2");

	}
    
    return 0;
}
