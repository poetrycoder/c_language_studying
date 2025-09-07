//复合赋值
// a+=1 的意思就是 a=a+1
// a*=12+6 的意思就是 a=a*(12+6)

//递增递减运算符
//count++ 的意思就是 count+=1
//count-- 的意思就是 count-=1

#include <stdio.h>
int main()
{
	int a = 10;
	int b = a++;           //先将a的当前值10赋给b,再执行a=a+1 
	printf("b=%d\n", b);   //b=10,a=11
	printf("a=%d\n", a);
	
	//int a = 10;
	//int b = ++a;           //先执行a=a+1,再将a的新值11赋给b 
	//printf("b=%d\n", b);   //b=11,a=11
	//printf("a=%d\n", a);
	
	return 0;
 } 
