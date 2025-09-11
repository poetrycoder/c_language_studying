//整数分解，输入一个非负整数，正序输出它的每一位数字

#include <stdio.h>
int main()
{
	int x;
	printf("输入一个非负整数，我将正序输出它的每一位数字：\n");
	scanf("%d", &x);
	
	int mask = 1;
	int t = x;
	
	while (t>=10) {
		t/=10;
		mask *= 10;
	}
	printf("x=%d,mask=%d\n",x,mask);
	
	do{
		int d = x / mask;
		printf("%d", d);
		if (mask>=10){
			printf(" ");
		}
		x%=mask;
		mask /= 10;
	}while(mask>0);
	printf("\n");
	
	return 0;
}