//else���÷� 

#include <stdio.h>
int main()
{
	//��ʼ��
	int price = 0;
	int bill = 0;
	//�������Ʊ��
	printf("�������\n");
	scanf("%d", &price);
	printf("������Ʊ�棺\n");
	scanf("%d", &bill);
	//��������
	if(bill>=price){
		printf("Ӧ������%dԪ��\n", bill-price);
	} else{
		printf("����Ǯ����������%dԪ��\n", price-bill);
	}
	
	return 0; 
	
 } 
