#include <stdio.h>

int main()
{
	int a, b;
	printf("请输入两个整数:\n");
	scanf("%d %d", &a, &b);
	
	int max = 0;
	if(a>b){
		max = a;
	} else{
		max = b;
	}
	
	/*
	
	还有一种方法，更简单但是可读性不如第一种。
	int max = b;
	if(a>b){
		max = a;
	}
	
	*/
	
	printf("最大值为:%d\n", max);
	
	return 0;
	
}

