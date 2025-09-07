//身高英尺单位换算 2.0

//代码改进，有2种思路 

/*
第1种思路如下：
	printf("请分别输入身高的英尺和英寸"
	    "(如输入5 7表示5英尺7英寸):\n");
	       
	int foot;
	int inch;
	
	scanf("%d %d", &foot, &inch); 
	
	printf("身高是%f米。\n", 
	    (foot + inch / 12.0) * 0.3048);     //把12改成12.0，浮点数跟整数运算，计算机会统一成浮点数运算，最后输出浮点数 
	    
	return 0;

*/


//第2种思路如下：
//用double数据类型
//double类型特点：printf里用%f,scanf里用%lf 
 
#include <stdio.h>
int main()
{
	
	printf("请分别输入身高的英尺和英寸"
	    "(如输入5 7表示5英尺7英寸):\n");
	       
	double foot;             //将foot跟inch都定义成double类型，也就是双精度浮点数类型 
	double inch;
	
	scanf("%lf %lf", &foot, &inch);     //%lf代表双精度浮点数，与double对应; 如果是float单精度浮点数类型的话，用%f 
	
	printf("身高是%f米。\n",          //double类型特点：printf里用%f,scanf里用%lf 
	    (foot + inch / 12) * 0.3048);
	    
	return 0;
	       
}
