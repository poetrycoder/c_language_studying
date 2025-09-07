//算平均数
/*
输入一系列正整数，最后输入-1表示输入结束，
然后程序计算出这些数字的平均数，
输出输入的数字的个数和平均数
*/

#include <stdio.h>
int main()
{
	int number;
	int sum=0;
	int count=0;
	
	printf("请输入一系列正整数：\n");
	scanf("%d", &number);
	
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d", &number);
	}
	
	printf("你输入了%d个数,平均值为%f\n", count,1.0*sum/count);
	
	return 0;
	
}
