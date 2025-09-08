//for循环

#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个整数n：\n");
	scanf("%d",&n);
	
	int fact = 1;
	int i = 1;
	
	
	/*while(i<=n){
		fact*=i;
		i++;
	}
	*/
	
	for (i=1;i<=n;i++){   //循环的初始条件；循环继续的条件；每一轮循环要做的工作
		fact *=i;
	}
	
	printf("%d!=%d\n",n,fact);
	return 0;
}