//scanf 的初步用法 
#include <stdio.h>
int main()
{
	int a;
	int b;
	
	//scanf("%d %d", &a, &b);                 input: 1 2
	//printf("%d %d\n", a, b);                  out: 1 2 
	
	//scanf("price%d,,,%d", &a, &b);          input:  price1,,,2
	//printf("%d。。。%d", a, b);               out:  1。。。2 
	
	//printf("请输入两个整数：\n");              
	//scanf("%d %d", &a, &b);                 input:  1 2  
	//printf("%d + %d = %d\n", a, b, a+b) ;     out:  1 + 2 = 3
	
	scanf("%d_%d\n", &a, &b);             //  input:  1_2
	printf("%d %d\n", a, b);              //  回车之后没有反应，必须再输入任意字符满足scanf里的回车，再回车，最后才能输出 
	
	return 0; 
	
}
