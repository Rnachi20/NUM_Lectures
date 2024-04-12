#include <stdio.h>
#include <math.h>

main()
{
	int a, b, al;
	float c, e;
	printf("a, b, al-iin utguud oruulna uu: \n");
	scanf("%d%d%d",&a,&b,&al);
	
	e=(float)cos(al*3.14/180);
	c=sqrt(pow(b,2)+pow(a,2)-(2*a*b*e));
	
	printf("Tegshitgeliin hariu ni: %.2f \n ", c);
	
}
