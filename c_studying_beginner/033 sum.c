//求和：f(n)=1/1+1/2+1/3+.....+1/n
//扩展：g(n)=1/1-1/2+1/3-1/4+.....1/n

#include <stdio.h>
int main()
{
	
	int i;
	int n;
	double sum = 0.0;
	//double sign = 1.0;
	
	printf("请输入一个正整数n：\n");
	scanf("%d", &n);
	
	
	for (i=1;i<=n;i++){
		sum += 1.0/i;
		//sum += sign/i
		//sign = -sign;
	}

	printf("f(%d)=%f\n", n, sum);	
	
	return 0;
}
