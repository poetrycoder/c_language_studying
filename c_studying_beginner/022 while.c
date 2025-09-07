//计算一个长数字有几位数

#include <stdio.h>
int main()
{

	int x;
	int n=0;
	printf("请输入一个数字:\n");
	scanf("%d", &x);
	n++;             //一开始这个循环之外的n++,是为了让x为0 
	x/=10;           
	while(x>0){
		n++;
		x/=10;
	}
	printf("这个数字的位数是：%d\n", n);
	return 0;
/*
	int x;
	int n=0;
	x=123456;
	while(x>0){
		//printf("hr1\n");        用来做调试的句子 
		n++;
		x/=10;
		//printf("x=%d,n=%d\n", x, n);   用来做调试的句子 
	}
	printf("%d\n", n);
	
	return 0;
*/

 } 
 
 
