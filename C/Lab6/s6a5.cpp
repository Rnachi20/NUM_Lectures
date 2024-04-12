#include <stdio.h>

main() {
	int  i, n, x, b=0, c=0;
	printf("n=");
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);	
	for(i=0; i<n; i++){
		if(a[i]<a[i+1]){
			b=b+1;
		}else if(a[i]>a[i+1]){
			c=c+1;
		}
	}
	
	if(b==n-1){
		printf("Usuhuur eremblegdsen baina ");
	}
	else if(c==n-1){
		printf("Buurahaar eremblegdsen baina ");
	}else{
		printf("Eremblegdeegui baina ");
	}	
}
