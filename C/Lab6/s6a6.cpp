#include <stdio.h>

main() {
	int  i, n, m, b=0, x, a[n*m];
	printf("1<=n baih n=");
	scanf("%d", &n);
	printf("m<100 baih m=");
	scanf("%d", &m);
	for(i = 0; i < n*m; i++){
		scanf("%d", &a[i]);
	}
	printf("x=");
	scanf("%d", &x);	
	for(i=0; i<n*m; i++){
		if(x==a[i]){
			printf("%d -r bairand baina\n", i+1);
			b=b+1;
		}
	}
	if(b==n*m){
	printf("-1");
	}
}
