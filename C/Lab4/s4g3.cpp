#include <stdio.h>

int main(){
	printf("Emegtei bol 0, Eregtei bol 1 gej oruulna uu\n");
	int m,n, j, k, a,b, h, c;
	scanf("%d", &n);
	if (n==1){
		printf("unduruu oruulna uu\n");
		scanf("%d",&h);
		printf("jingee oruulna uu\n");
		scanf("%d",&j);
		k=j-52;
		c=h-150;
		a=c/2.5;
		b=a*1.9;
		if(b-k>5){
			printf("%d kg nemeh heregtei\n", b-k-5);
		}else if(b-k<=5 && b-k>=-5){
			printf("heviin bn\n", b-k);
		}else if(b-k<-5){
			printf("%d kg hasah heregtei\n", k-b-5);
		}
	}
	else
		printf("undur oruulna\n");
		scanf("%d",&h);
		printf("jingee oruulna\n");
		scanf("%d",&j);
		k=j-49;
		c=h-150;
		a=c/2.5;
		b=a*1.7;
		if(b-k>5){
			printf("%d kg nemeh heregtei\n", b-k-5);
		}else if(b-k<=5 && b-k>=-5){
			printf("heviin bn\n", b-k);
		}else if(b-k<-5){
			printf("%d kg hasah heregtei\n", k-b-5);
		}	
}
