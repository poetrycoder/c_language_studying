//for循环

#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个整数n：\n");
	scanf("%d",&n);
	
	int fact = 1;
	int i = 1;
	while(i<=n){
		fact*=i;
		i++;
	}
	printf("%d!=%d\n",n,fact);
	
	return 0;
}