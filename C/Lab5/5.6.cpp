#include <stdio.h>
int main()
{
	int n,i,s,m;
	scanf("%d",&n);
	s=0;
	for (i=0;i<n;i++
	){m=n%10;s=s+m
	;n=n/10;}
	printf("%d",s);
}
