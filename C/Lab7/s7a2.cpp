#include <stdio.h>

main(){
	int i, n, j=0, a[n], k=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	for(i=0; i<n; i++){
		k=k+a[i];
	}
	k=k/n;
	
	for(i=0; i<n; i++){
		if(a[i]>=k)
			j=j+1;
	}
	printf("Angiin dundaj undur: %d\n", k);
	printf("Dundjaas deesh undurtei huuhdiin too: %d", j);
}
