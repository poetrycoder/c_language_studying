//循环控制：判断一个数是不是素数

#include <stdio.h>
int main()
{
	int x;
	
	printf("请输入一个整数:\n");
	scanf("%d", &x);
	
	int i;
	int isPrime = 1;    // 先令x是素数
	for (i=2;i<x;i++){
		if (x%i==0) {
			isPrime = 0;	
			break;
		}
	}
	if (isPrime==1){
		printf("是素数\n");
	}else{
		printf("不是素数\n");
	}
	return 0;
}