#include <stdio.h>

int main()
{
	int a, b;
	printf("��������������:\n");
	scanf("%d %d", &a, &b);
	
	int max = 0;
	if(a>b){
		max = a;
	} else{
		max = b;
	}
	
	/*
	
	����һ�ַ��������򵥵��ǿɶ��Բ����һ�֡�
	int max = b;
	if(a>b){
		max = a;
	}
	
	*/
	
	printf("���ֵΪ:%d\n", max);
	
	return 0;
	
}

