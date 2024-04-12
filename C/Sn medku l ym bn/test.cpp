#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i++])
		{
			int t=a[i];
			a[i]=a[i++];
			a[i++]=t;
			for( int j=0;j<n;j++)
			printf("%d",a[j]);
		}
	}
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
}
