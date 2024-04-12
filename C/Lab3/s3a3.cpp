#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	c < b && a < c && printf("bolj ");
	(a % 3 == 0 || c % 5 == 3) && printf("bna.\n");
	/* b>c>a gesen daraallaar 
	a ni 3-d huvaagdah ali esvel 
	c ni 5-d huvaahad 3 noogdoh utga oruulahad bolno
	jishee ni 
	3, 5, 4
	1, 9, 8*/
}
