#include <stdio.h>

main() {
	int  i, n, x, b=0;
	printf("n=");
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("x=");
	scanf("%d", &x);	
	for(i=0; i<n; i++){
		if(x==a[i]){
			printf("%d -r bairand baina ", i+1);
			b=b+1;
		}
	}
	if(b==0){
	printf("-1");
	}
}
