#include <stdio.h>

main() {
	int  i, j, n, m, a[n],b[m];
	printf("1<=n<100 baih n=");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("1<=m<100 baih m=");
	scanf("%d", &m);
	for(i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}	

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(a[i]==b[j]){
				printf("%d ", a[i]);
		}
		}
	}
}
