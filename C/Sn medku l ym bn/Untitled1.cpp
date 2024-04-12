#include <stdio.h>

int main (){
	int n, m, i, j, a[100][100];
	printf ("Muriin toog oruulna uu:");
	scanf("%d", &n);
	printf ("Baganiin toog oruulna uu:");
	scanf("%d", &m);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			a[i][j] = i; 
		}
	
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			printf("%d  ", a[i][j]); 
		}
		printf("\n");
	}
}
