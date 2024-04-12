#include <stdio.h>
int main()
{
	int a,b,s;
	printf("2 too oruul");
		scanf("%d%d",&a,&b);
	while(b!=0){
		s=b;
		b=a%b;
		a=s;
	}
	printf("%d",a);
		
	}
