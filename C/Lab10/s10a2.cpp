#include<stdio.h>

int count(int n){
	int a=0;
	for (int i=1; i<=n; i++){
		if(n%i==0){
			a++;
		}
	}
	return a;
}

int main(){
	int n;
	printf("N toog oruulna uu: ");
	scanf("%d", &n);
	printf("%d toonii huvaagchdiin too: %d", n, count(n));	
}
