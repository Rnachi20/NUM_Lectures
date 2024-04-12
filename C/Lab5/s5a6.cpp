#include <stdio.h>

main(){
	int n, x, a, b;
	printf("N=");
	scanf("%d", &n);
	while(n>0){
		a = n % 10;
		b = b + a;
		n = n/10;
	}
	printf("n toonii  tsifruudiin niilber ni: %d", b);
	return 0;		
}
