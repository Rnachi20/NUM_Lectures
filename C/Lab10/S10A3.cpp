#include<stdio.h>
#include<string.h>

int count(int n, int A[]){
	int c,j=0;
	for (int i=1; i<=n; i++){
		if(n%i==0){
			A[j]=i;
			j++;
			c++;
		}
	}
	return c;
}

int main(){
	int n, A[100], m;
	printf("N toog oruulna uu: ");
	scanf("%d", &n);
	m = count(n, A);
	printf("%d toonii huvaagchdiin too: %d\n", n, m);	
	for(int i=0; i<m; i++){
		printf("%d ", A[i]);
	}
}
