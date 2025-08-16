#include <stdio.h>
int main()
{
	int score;
	
	printf("请输入成绩(0-100分):\n");
	scanf("%d", &score);
	
	int grade = score/10;
	
	switch(grade){
	case 10:
	case 9:
		printf("成绩等级为A");
		break;
	case 8:
		printf("成绩等级为B");
		break;
	case 7:
		printf("成绩等级为C");
		break;
	case 6:
		printf("成绩等级为D");
		break;
	default:
		printf("成绩等级为E");
		break; 
	}
	
	return 0;
 } 
