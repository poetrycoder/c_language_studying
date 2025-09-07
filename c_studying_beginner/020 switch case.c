#include <stdio.h>
int main()
{
	int type;
	
	printf("请输入type:\n");
	scanf("%d", &type);
	
	switch(type){
	case 1:
	case 2:
		printf("早上好");
		break;
	case 3:
		printf("晚上好");
		break;
	case 4:
		printf("再见");
		break;
	default:
		printf("啊？什么？");
		break; 
	}
	
	return 0;
 } 
