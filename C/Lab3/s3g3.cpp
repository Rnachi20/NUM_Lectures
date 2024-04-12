#include <stdio.h>

int main()
{
	float a, b;
	scanf("%f", &a);
	if(a<36 && a>=0){
		b=a*100/35;
		if(b>89&&b<101){
			printf("%.2fA", b);
		}else if(b>79&&b<90){
			printf("%.2fB", b);
		}else if(b>69&&b<80){
			printf("%.2fC", b);
		}else if(b>59&&b<70){
			printf("%.2fD", b);
		}else{
			printf("%.2fF", b);
		}
		
	}else{
		printf("Yrtuntsuus tasartsan lag onootoi ymaa");
	}
}
