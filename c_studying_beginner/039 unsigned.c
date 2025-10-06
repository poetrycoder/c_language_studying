#include <stdio.h>
int main(){
	
	char a = 255;
	unsigned char b = 255;     // unsigned 的作用是变成纯二进制不考虑负数 
	int c = 255;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	// a: 11111111    char
	// b: 11111111   纯二进制 255
	// c: 00000000 00000000 0000000000 11111111
	
	return 0;
}