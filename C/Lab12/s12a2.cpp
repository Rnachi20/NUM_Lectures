#include<stdio.h>

typedef struct {
	int d, m , y;
} Date;

Date read() {
	Date a;
	printf("Year=");
	scanf("%d", &a.y);
	printf("Month=");
	scanf("%d", &a.m);
	printf("Day=");
	scanf("%d", &a.d);
	
	return a;
};

void print(Date dt){
	printf("%d/", dt.y);
	if(dt.m<10){
		printf("0%d/", dt.m);
	}else{
		printf("%d/", dt.m);
	}
	if(dt.d<10){
		printf("0%d\n", dt.d);
	}else{
		printf("%d\n", dt.d);
	}
};

main(){
	int n,i;	
	printf("N=");
	scanf("%d", &n);
	Date a[n];
	for( i=0; i<n; i++){
		a[i]=read();
	}
	
	for(i=0; i<n; i++){
		print(a[i]);
	}
}
