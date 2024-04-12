#include <stdio.h>

main(){
	int n, m, i, j, a[n][m], s, max = 0, k;
	printf ("Muriin toog oruulna uu:");
	scanf("%d", &n);
	printf ("Baganiin toog oruulna uu:");
	scanf("%d", &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[j][i]);
		}
	}
	
	for(i=0; i<n; i++){
		s = 0;
		for(j=0; j<m; j++){
			if(a[i][j] % 2 == 0)
				s++;
		}
		if(s > max)
		{
			max = s;
			k = j;
		}
	}
	printf("%d-r bagana hamgiin ih tegsh elementtei", k);
}
