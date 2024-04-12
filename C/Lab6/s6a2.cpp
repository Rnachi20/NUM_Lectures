#include <stdio.h>

main() {
	int  i, n;
	printf("n=");
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(i=n-1; i>=0; i--)
		printf("%d ",a[i]);
}
