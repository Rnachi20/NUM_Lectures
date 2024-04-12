#include <stdio.h>
#include <math.h>

main()
{	
	int a, b, c, d;
	float x1, x2;
	printf("a, b, c-iin utguud oruulna uu: \n");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if(d>0){
		x1=(float)(-b-sqrt(d))/(2*a);
		x2=(float)(-b+sqrt(d))/(2*a);
		printf("d=%d\n",d);
		printf("2 shiidtei \n");
		printf("x1=%.2f\n",x1);
		printf("x2=%.2f\n",x2);
	}else if(d==0)	{
		x1=(float)(-b)/(2*a);
		printf("1 shiidtei \n");
		printf("x=%.2f\n",x1);
	}else{
		printf("\n d ni 0-ees baga tul bodit shiid orshin baihgui");
	}
}
