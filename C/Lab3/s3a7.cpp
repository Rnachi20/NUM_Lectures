#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	b=0;
	while(a>0){
		a=a/10;
		b=b+1;
	}
	printf("Orongiin too: %d \n", b);
}
