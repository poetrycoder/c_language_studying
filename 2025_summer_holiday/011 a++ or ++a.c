//���ϸ�ֵ
// a+=1 ����˼���� a=a+1
// a*=12+6 ����˼���� a=a*(12+6)

//�����ݼ������
//count++ ����˼���� count+=1
//count-- ����˼���� count-=1

#include <stdio.h>
int main()
{
	int a = 10;
	int b = a++;           //�Ƚ�a�ĵ�ǰֵ10����b,��ִ��a=a+1 
	printf("b=%d\n", b);   //b=10,a=11
	printf("a=%d\n", a);
	
	//int a = 10;
	//int b = ++a;           //��ִ��a=a+1,�ٽ�a����ֵ11����b 
	//printf("b=%d\n", b);   //b=11,a=11
	//printf("a=%d\n", a);
	
	return 0;
 } 
