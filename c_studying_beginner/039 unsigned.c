#include <stdio.h>
int main(){
	
	char a = 255;
	unsigned char b = 255;     // unsigned 的作用是变成纯二进制不考虑负数 
	int c = 255;
	char d = 127;
	d = d+1;
	char e = -128;
	e = e-1;
	
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	// a: 11111111  char -128~127
	// b: 11111111   纯二进制 0~255
	// c: 00000000 00000000 0000000000 11111111
	
	printf("127+1=%d\n", d);
	printf("-128-1=%d\n", e);
	
	unsigned char f = 255;
	f = f+1;
	unsigned char g = 0;
	g = g-1;
	
	printf("255+1=%d\n", f);
	printf("0-1=%d\n", g);
	
	
	return 0;
}