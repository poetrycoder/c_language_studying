/*
做题练习001：
给定不超过6的正整数A，考虑从A开始的连续4个数字，请输出所有由它们组成的无重复数字的3位数
要求从小到大输出，每行6个整数，整数间用空格分隔，但行末不能有多余空格。
*/

#include <stdio.h>
int main()
{
	int a;
	int i, j, k;
	int cnt=0;
	
	printf("请输入一个<=6的正整数:\n");
	scanf("%d", &a);
	
	i = a;
	while(i<=a+3){
		j = a;
		while(j<=a+3){
			k = a;
			while(k<=a+3){
				if(i!=j){
					if(i!=k){
						if(j!=k){
							cnt++;
							printf("%d%d%d", i, j, k);
							if(cnt==6){
								printf("\n");
								cnt=0;
							}else{
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	
	return 0;
}