#include <stdio.h>

main() {
	int  i, n, m, a[n],b[m],c[n+m];
	printf("1<=n baih n=");
	scanf("%d", &n);
	printf("m<100 baih m=");
	scanf("%d", &m);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		c[i] = a[i];
	}
	for(i = 0; i < m; i++){
		scanf("%d", &b[i]);
		c[n+i] = b[i];
	}
	for(i = 0; i < m+n; i++){
		printf("%d ", c[i]);
	}
}
