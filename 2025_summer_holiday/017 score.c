
#include <stdio.h>
int main()
{
	const int PASS=60;
	int score;
	
	printf("请输入成绩：\n");
	scanf("%d", &score);
	if (score>=PASS){
		printf("祝贺你，成绩及格!\n");
	}
	else{
		printf("很遗憾，成绩未及格。\n");
	}
	return 0;

	
 } 
