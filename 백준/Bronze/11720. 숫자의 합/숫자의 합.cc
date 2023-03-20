#include<stdio.h>

int main() {
	int N, i, sum=0;
	char arr[101];//0으로 초기화
	
	scanf("%d", &N);// 숫자 개수
	scanf("%s", arr);


	for (i = 0; i < N; i++) {
		sum += arr[i]-'0';
	}

	printf("%d\n", sum);
	return 0;
}