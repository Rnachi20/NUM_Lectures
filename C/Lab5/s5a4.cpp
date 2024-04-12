#include <stdio.h>

int main(){
	int n, s;
	printf("N hemjeenii too oruulna uu\n");
	scanf("%d", &n);
	s=0;
	for(int i=0; i<=n; i+=2){
		s=s+i;
	}
	printf("n hurtelh tegsh toonuudiin niilber ni: %d\n", s);
	return 0;		
}
