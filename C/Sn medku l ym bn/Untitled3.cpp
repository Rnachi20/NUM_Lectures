#include <stdio.h>

int main (){
	int n, i, j, a[100][100], k, l;
	printf ("Muriin toog oruulna uu:");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		k=1;
		l=n;
		
		for(j=i; j<=n+i; j++){
			if(j<n){
				a[i][k] = j;
			}
			else if(j >= n){	
				a[i][k] = l;
				l--;
			}
		k++; 
		}
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("%d  ", a[i][j]); 
		}
		printf("\n");
	}
}
