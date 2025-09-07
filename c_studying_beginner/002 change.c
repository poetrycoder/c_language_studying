//计算找零 
#include <stdio.h>
int main()
{
	int price;
	int amount;
	
	printf("请输入商品金额（元）:\n");
	scanf("%d", &price);
	
	printf("请输入票面（元）:\n");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("找您%d元。\n", change); 
	
 } 
