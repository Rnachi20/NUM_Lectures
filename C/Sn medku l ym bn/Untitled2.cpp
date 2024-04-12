#include <stdio.h>

int main (){
	int n, l, m, k, i, j, A[100][100], B[100][100], C[100][100];
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(i=1; i<=m; i++){
		for(j=1; j<=k; j++){
			scanf("%d", &B[i][j]);
		}
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=k; j++){
			
			for(l=1; l<=m; l++){
				C[i][j]+=A[i][l]*B[l][j];
			}
		}
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=k; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
}
