#include <stdio.h>

main() {
	int  i, j, n, m, a[n],b[m],c[m+n], s=0 ;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
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
	
	printf("\n");
	printf("Negdel: ");
	for(i=0; i<n+m; i++){
		s=0;
		for(j=i+1; j<m+n; j++){
			if(c[i]==c[j]){
				s++;
			}
		}
		if(s==0){
			printf(" %d ", c[i]);
		}
	}
}
