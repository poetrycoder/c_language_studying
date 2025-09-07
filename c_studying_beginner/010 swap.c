//交换两个数
//利用中间变量作为跳板
//学习使用 "调试 "功能 

#include <stdio.h>
int main()
{
	int a;
	int b;
	int t;
	
	printf("请输入2个整数:\n");
	scanf("%d %d", &a, &b);
	
	t = a;
	a = b;
	b = t;
	
	printf("经过调换之后:\na = %d, b = %d\n", a, b);
	
	return 0;
	
}
