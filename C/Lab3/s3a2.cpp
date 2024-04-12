#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("2 toog oruulna uu: ");
	scanf("%d%d", &a, &b);
	c = ( a < b ) * a + ( a >= b ) * b;
	d = ( a > b ) * a + ( a <= b ) * b;		
	printf("Eremblevel: %d, %d\n", c, d);
		
}
