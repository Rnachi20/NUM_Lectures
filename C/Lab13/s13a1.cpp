#include <stdio.h>

int main(){
	int x;
	int *p;
	p = &x;	
	printf("Onooh utgaa oruulna uu ");
	scanf("%d", &*p);
	printf("%d\n", x);
	return 0;
}
