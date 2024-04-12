#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	(a == b && b==c) && printf("Zuv gurvaljin");
	((a == b && b!=c) || (b==c && c!=a) || (c==a && a!=b))&& printf("Adil hajuut gurvaljin");
	(a != b && b!=c && c!=a) && printf("Eldev talt gurvaljin");
} 
