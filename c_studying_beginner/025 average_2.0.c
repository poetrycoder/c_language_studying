//��ƽ����
/*
����һϵ�����������������-1��ʾ���������
Ȼ�����������Щ���ֵ�ƽ������
�����������ֵĸ�����ƽ����
*/

#include <stdio.h>
int main()
{
	int number;
	int sum=0;
	int count=0;
	
	printf("������һϵ����������\n");
	scanf("%d", &number);
	
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d", &number);
	}
	
	printf("��������%d����,ƽ��ֵΪ%f\n", count,1.0*sum/count);
	
	return 0;
	
}
