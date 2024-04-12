#include<stdio.h>

typedef struct {
	int d, m;
} Date;


int udriin_zuruu(Date a,Date b){ //a-naadam b-odoogiin 
	int i;
	int sariin_honog=0;
	for(i=b.m; i<a.m; i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
			sariin_honog+=31;
		}else if(i==2){
			sariin_honog+=28;
		}else{
			sariin_honog+=30;
		}	
	}
	sariin_honog = sariin_honog - b.d + a.d;
	return sariin_honog;
}

main(){
	int n,i;
	Date naadam;
	Date today;
	printf("Naadmiin sar, udur oruulna uu\n");
	scanf("%d", &naadam.m);
	scanf("%d", &naadam.d);
	printf("Unuudriin sar, udur oruulna uu\n");
	scanf("%d", &today.m);
	scanf("%d", &today.d);
	n=udriin_zuruu(naadam, today);
	printf("Naadam bolohod %d", n);	
	
}
