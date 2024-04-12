#include <stdio.h>

int main(){
	int a, b, n, s;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	if(a<b){
		n=a;
	}else{
		n=b;
	}
	for(int i=1; i<=n; i++){
		if(a%i==0 && b%i==0){
			s=i;
		}
	}
	printf("%d", s);
	return 0;		
}
