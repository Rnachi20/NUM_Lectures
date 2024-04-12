#include <stdio.h>
#include <math.h>

main()
{
	int a, b, c, d, h;
	float e, g, i;
	printf("a, b, c, d-iin utguud oruulna uu: \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=pow(a,3)+(double)b/c;
	g=sqrt(pow(e,2)+d);
	h=pow(d,2)-(double)a*b/c;
	if (h != 0){
		i=g/h*d;
		printf("Tegshitgeliin hariu ni: %.2f \n ", i);		
	} else printf("0 division error.\n");	
}
