// do while 先执行再判断 

#include <stdio.h>
int main()
{

	int x;
	int n=0;
	printf("请输入一个数字:\n");
	scanf("%d", &x);
	do {
		x/=10;
		n++;
	} while(x>0);     //注意while结尾要有分号。 
	printf("这个数字的位数是：%d\n", n);
	return 0;
}
