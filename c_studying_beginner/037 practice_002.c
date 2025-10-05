/*
做题练习002：
水仙花数是指一个N位正整数(N>=3)，它的每个位上的数字的N次幂之和等于它本身
指定一个n位数，输出所有n位的水仙花数。
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("请输入一个正整数：\n");
	scanf("%d", &n);
	
	
	//first是遍历范围的起始点，比如 n=3,就是3位数，就要从100开始遍历
	int first =1;
	int i = 1;
	while(i<n){
		first *= 10;
		i ++;
	}
	printf("first=%d\n",first);
	
	//知道了遍历范围的起始点，就开始遍历
	i = first;
	while(i<first*10){      //遍历范围的终止点是first*10-1,用小于号即可
		int t = i;
		int sum = 0;
		
		do{
			int d = t%10;
			t/=10;
			int p = d;
			int j = 1;
			while(j<n){
				p*=d;
				j++;
			}
			sum += p;
			
		}while(t>0);
		if(sum==i){
			printf("%d\n", i);
		}
		i++;
	}
	 
	return 0;	
}