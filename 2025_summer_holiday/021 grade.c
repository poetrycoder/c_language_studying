#include <stdio.h>
int main()
{
	int score;
	
	printf("������ɼ�(0-100��):\n");
	scanf("%d", &score);
	
	int grade = score/10;
	
	switch(grade){
	case 10:
	case 9:
		printf("�ɼ��ȼ�ΪA");
		break;
	case 8:
		printf("�ɼ��ȼ�ΪB");
		break;
	case 7:
		printf("�ɼ��ȼ�ΪC");
		break;
	case 6:
		printf("�ɼ��ȼ�ΪD");
		break;
	default:
		printf("�ɼ��ȼ�ΪE");
		break; 
	}
	
	return 0;
 } 
