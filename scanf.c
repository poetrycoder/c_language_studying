//scanf �ĳ����÷� 
#include <stdio.h>
int main()
{
	int a;
	int b;
	
	//scanf("%d %d", &a, &b);                 input: 1 2
	//printf("%d %d\n", a, b);                  out: 1 2 
	
	//scanf("price%d,,,%d", &a, &b);          input:  price1,,,2
	//printf("%d������%d", a, b);               out:  1������2 
	
	//printf("����������������\n");              
	//scanf("%d %d", &a, &b);                 input:  1 2  
	//printf("%d + %d = %d\n", a, b, a+b) ;     out:  1 + 2 = 3
	
	scanf("%d_%d\n", &a, &b);             //  input:  1_2
	printf("%d %d\n", a, b);              //  �س�֮��û�з�Ӧ�����������������ַ�����scanf��Ļس����ٻس������������ 
	
	return 0; 
	
}
