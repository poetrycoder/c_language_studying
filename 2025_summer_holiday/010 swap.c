//����������
//�����м������Ϊ����
//ѧϰʹ�� "���� "���� 

#include <stdio.h>
int main()
{
	int a;
	int b;
	int t;
	
	printf("������2������:\n");
	scanf("%d %d", &a, &b);
	
	t = a;
	a = b;
	b = t;
	
	printf("��������֮��:\na = %d, b = %d\n", a, b);
	
	return 0;
	
}
