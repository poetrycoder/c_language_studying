//���Ӣ�ߵ�λ���� 2.0

//����Ľ�����2��˼· 

/*
��1��˼·���£�
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��"
	    "(������5 7��ʾ5Ӣ��7Ӣ��):\n");
	       
	int foot;
	int inch;
	
	scanf("%d %d", &foot, &inch); 
	
	printf("�����%f�ס�\n", 
	    (foot + inch / 12.0) * 0.3048);     //��12�ĳ�12.0�����������������㣬�������ͳһ�ɸ��������㣬������������ 
	    
	return 0;

*/


//��2��˼·���£�
//��double��������
//double�����ص㣺printf����%f,scanf����%lf 
 
#include <stdio.h>
int main()
{
	
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��"
	    "(������5 7��ʾ5Ӣ��7Ӣ��):\n");
	       
	double foot;             //��foot��inch�������double���ͣ�Ҳ����˫���ȸ��������� 
	double inch;
	
	scanf("%lf %lf", &foot, &inch);     //%lf����˫���ȸ���������double��Ӧ; �����float�����ȸ��������͵Ļ�����%f 
	
	printf("�����%f�ס�\n",          //double�����ص㣺printf����%f,scanf����%lf 
	    (foot + inch / 12) * 0.3048);
	    
	return 0;
	       
}
