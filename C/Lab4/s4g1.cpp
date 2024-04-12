#include <stdio.h>
#include <math.h>

int main()
{
	int n, a=0, b, c=2;
	printf("Ta duriin n too oruulna uu.\n");
	scanf("%d", &n);
	if(n<=100000){
		if(n%2!=0){
			while(n>0){
			a=a+n%10;
			n=n/10;
		}
			if (a%3==0){
				printf("3t huwaagdana");
			}else{
				printf("3t huwaagdahgui");
			}
		
		}else{
			b=n%100;
			if (b%4==0){
				printf("4t huwaagdana");
			}else{
				printf("4t huwaagdahgui");
			}
		}
	}else{
		printf("Ta het ih toonii ugugdul oruulsan bn.\n");
	}
}
