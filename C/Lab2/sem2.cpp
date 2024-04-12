#include <stdio.h>
#include <math.h>

main()
{
	/*1*/
	printf("Sain baina uu? C hel\n");
	
	/*2*/
	int y=2018, m=2, d=5;
	printf("\nUnuudur %d onii %d sariin %d-nii udur.\n",y,m,d);
	
	/*3*/
	int c=2002, k=9, e=24;
	printf("\nUnuudur %d onii %d sariin %d-nii udur.\n",c,k,e);
	
	/*4*/
	int l,o,n;
	printf("\nTa on sar udruu oruulna uu: \n");
	scanf("%d%d%d", &l,&o,&n);
	if (l>=2000&&l<=3000&&o>0&&o<13&&n>0&&n<32){
		printf("%d onii %d sariin %d-nii udur.\n",l,o,n);
	}else{
		printf("Ta bolomjgui utga oruulsan bn. \n");
	}
	
	/*5*/
	int a,b;
	float f, g, h, i, j;
	printf("a,b-iin utga oruulna uu: \n");
	scanf("%d%d", &a,&b);
	printf("\n Tanii oruulsan utga a=%d , b=%d baina.\n",a,b);
	f=a+b;
	printf("a+b=%.2f\n",f);
	g=a-b;
	printf("a-b=%.2f\n",g);
	h=a*b;
	printf("a*b=%.2f\n",h);
	i=(float)a/b;
	printf("a/b=%.2f\n",i);
	j=a%b;
	printf("a%%b=%.2f\n",j);	
}
