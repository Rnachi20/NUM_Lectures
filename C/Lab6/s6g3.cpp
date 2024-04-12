#include <stdio.h>
int main() {
	int m,k,n,i,j,dugaar=1, a[k][n][m];
	printf("Ail, orts, davharaa oruulna uu\n");
	scanf("%d%d%d",&m,&k,&n);
	
	for(i=1;i<=k;i++){
		printf("%d-r orts\n",i);
		for(j=1;j<=n;j++){
			printf("     %d-r dawhar\n",j);
			for(k=1 ; k<=m ; k++ , dugaar++){
				a[i][j][k]=dugaar;
				printf("     		%d-r ail: %d toot\n",k,dugaar);
			}
		}
	}
	return 0;
}

