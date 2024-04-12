#include <stdio.h>

int main(){
	int n, s, k;
	printf("N=");
	scanf("%d", &n);
	k = (n - 32)/1.8;
	for(int i=0; i<=k; i++){
		float s = 1.8 * i + 32;
		printf("%d %.1f\n", i, s);
			
	}
	return 0;		
}
