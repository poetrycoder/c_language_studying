//��������

#include <stdio.h>
int main()
{
	int x;
	printf("������һ������:\n");
	scanf("%d", &x);
	
	int digit;
	int result = 0;
	
	
	while(x>0){
		digit = x%10;
		// printf("%d\n", digit);
		result = result*10+digit;
		printf("x=%d, digit=%d, result=%d\n", x, digit, result);
		x/=10;
	}
	printf("%d", result);
	
	return 0;
}