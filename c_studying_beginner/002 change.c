//�������� 
#include <stdio.h>
int main()
{
	int price;
	int amount;
	
	printf("��������Ʒ��Ԫ��:\n");
	scanf("%d", &price);
	
	printf("������Ʊ�棨Ԫ��:\n");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("����%dԪ��\n", change); 
	
 } 
