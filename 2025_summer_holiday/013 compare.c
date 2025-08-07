//条件语句(不等号)   关系运算 
//成立为1，不成立为0 
//连续的关系运算是从左到右的 

#include <stdio.h>
int main()
{
	printf("%d\n", 5==3);
	printf("%d\n", 5>3);
	printf("%d\n", 5<=3);
	printf("%d\n", 7>=3+4);
	printf("%d\n", 6>5>4); //从左到右,6>5的结果是1,1>4的结果是0,所以最后结果是0 
	
	return 0;
}
