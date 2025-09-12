//计算两个数的最大公约数

#include <stdio.h>
int main()
{
	int a, b;
	int t;
	
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	
	while(b!=0){
		t = a%b;
		a = b;
		b = t;
		printf("a=%d, b=%d, t=%d\n", a, b, t);
	}
	
	printf("最大公约数(gcd)=%d\n", a);
	
	return 0;
}