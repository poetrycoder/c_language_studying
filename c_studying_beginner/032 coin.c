//凑硬币 ：学习如何跳出多重循环
//常见的有break,continue,还可以了解一下goto用法
# include <stdio.h>
int main(){
	
	int x;
	int one,two,five;
	int exit = 0;
	
	printf("请输入花费(元)：\n");
	scanf("%d", &x);
	
	for (one=1;one<x*10;one++){
		for (two=1;two<x*10/2;two++){
			for (five=1;five<x*10/5;five++){
				if (one*1+two*2+five*5==x*10){
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one,two,five,x);
					exit = 1;
					break;
					// goto out;
				}
			}
			if(exit==1) break;
		}
		if (exit==1) break;
	}
//out:
	return 0;
}