//借助分段函数来理解级联的if else,也就是else if 

#include <stdio.h>
int main()
{
	int x;
	
	printf("计算分段函数的函数值。\n");
	printf("请输入自变量x:\n");
	scanf("%d", &x);
	
	int f=0;
	if(x<0){
		f=-1;
    }
	else if(x==0){
		f=0;
	}	
	else{
		f=2*x;
	}
	
	printf("对应的因变量为：%d\n", f);
	
	return 0;
 } 
