//����һ���������м�λ��

#include <stdio.h>
int main()
{

	int x;
	int n=0;
	printf("������һ������:\n");
	scanf("%d", &x);
	n++;             //һ��ʼ���ѭ��֮���n++,��Ϊ����xΪ0 
	x/=10;           
	while(x>0){
		n++;
		x/=10;
	}
	printf("������ֵ�λ���ǣ�%d\n", n);
	return 0;
/*
	int x;
	int n=0;
	x=123456;
	while(x>0){
		//printf("hr1\n");        ���������Եľ��� 
		n++;
		x/=10;
		//printf("x=%d,n=%d\n", x, n);   ���������Եľ��� 
	}
	printf("%d\n", n);
	
	return 0;
*/

 } 
 
 
