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

int less(Date a, Date b){
	if(a.y<b.y){
		return 1;
	}else if(a.y==b.y && a.m<b.m){
		return 1;
	}else if(a.y==b.y && a.m==b.m && a.d<b.d){
		return 1;
	}else{
		return 0;
	}
};

main(){
	Date a1=read();
	print(a1);
	
	Date a2=read();
	print(a2);
	
	printf("%d", less(a1, a2));
	
}
