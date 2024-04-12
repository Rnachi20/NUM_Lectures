#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Unen bol 1\nHudal bol 0 gesen utga hevlene\n");
	scanf("%d%d", &a, &b);
	
	c = a > b;
	printf("ehnii too ih: %d\n", c);
	
	c = a < b;
	printf("hoyr doh too ih:%d\n", c);
	
	c = a >= b;
	printf("Ehnii too daraagiin toonoos ih esvel tentsuu:%d\n", c);
	
	c = a <= b;
	printf("Ehnii too daraagiin toonoos baga esvel tentsuu:%d\n", c);
	
	c = a != b;
	printf("hoyr too tentsuu bish baina: %d\n", c);
	
	c = a == b;
	printf("hoyr too tentsuu bish baina: %d\n", c);
}

