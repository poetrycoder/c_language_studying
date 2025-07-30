//const 修饰词，作用是定义一个不可被修改的常量，常量一般用全大写 
#include <stdio.h>
int main()
{
	
	const int AMOUNT = 100;
	
	AMOUNT = 90;       //AMOUNT不可被修改，所以这里会报错 
	
	printf("AMOUNT=", AMOUNT);
	
	return 0; 
 } 
