//�����ֶκ�������⼶����if else,Ҳ����else if 

#include <stdio.h>
int main()
{
	int x;
	
	printf("����ֶκ����ĺ���ֵ��\n");
	printf("�������Ա���x:\n");
	scanf("%d", &x);
	
	int f=0;
	if(x<0){
		f=-1;
    }
	else if(x==0){
		f=0;
	}	
	else{
		f=2*x;
	}
	
	printf("��Ӧ�������Ϊ��%d\n", f);
	
	return 0;
 } 
