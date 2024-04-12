#include<stdio.h>
struct Rational{
	int d, n; // d/n engiin butarhai d-hurtwer(deer)
};

typedef struct Rational Rational;

void print(Rational a){ // a engiin butarhaig hewleh
	printf("%d/%d",a.d,a.n);
}

Rational simplify(Rational a){ // a engiin butarhaig huraah
	for(int i=1; i<=a.d ; i++){
		if(a.d%i==0 && a.n%i==0){
			a.d=a.d/i;
			a.n=a.n/i;
		}
	}
	print(a);
}        
Rational add(Rational a, Rational b){ // a, b engiin butarhaig hoorond ni nemeh
	Rational c;
	c.d=a.n*b.d+b.n*a.d;
	c.n=a.n*b.n;
	printf("niilber = ");
	if(c.d==c.n) 
		printf("1");
	else if(c.d==0) 
		printf("0");
	else if(c.n==1)
		printf("%d",c.d);
	else 
		simplify(c);
		
	printf("\n");
}     
Rational sub(Rational a, Rational b){ // a, b engiin butarhaig hoorond ni hasah
	Rational c;
	c.d=b.n*a.d-a.n*b.d;
	c.n=a.n*b.n;
	printf("ylgawar = ");
	if(c.d==c.n) 
		printf("1");
	else if(c.d==0) 
		printf("0");
	else if(c.n==1)
		printf("%d",c.d);
	else 
		simplify(c);
		
	printf("\n");
		
}     
Rational mult(Rational a, Rational b){ // a, b engiin butarhaig hoorond ni urjih
	Rational c;
	c.d=a.d*b.d;
	c.n=a.n*b.n;
	printf("urjwer = ");
	if(c.d==c.n) 
		printf("1");
	else if(c.d==0) 
		printf("0");
	else if(c.n==1)
		printf("%d",c.d);
	else 
		simplify(c);
		
	printf("\n");
}   
Rational div(Rational a, Rational b){ // a, b engiin butarhaig hoorond ni huwaah
	Rational c;
	c.d=a.d*b.n;
	c.n=a.n*b.d;
	printf("noogdwor = ");
	if(c.d==c.n) 
		printf("1");
	else if(c.d==0) 
		printf("0");
	else if(c.n==1)
		printf("%d",c.d);
	else 
		simplify(c);
		
	printf("\n");
}       
              
main(){
	Rational r1, r2;
	printf("Ehnii butarhai:\nhurtwer = ");
	scanf("%d", &r1.d);
	printf("huwaari = ");
	scanf("%d", &r1.n);
	printf("Hoyrdahi butarhai:\nhurtwer = ");
	scanf("%d", &r2.d);
	printf("huwaari = ");
	scanf("%d", &r2.n);
	printf("\n");
	add(r1, r2);
	sub(r1, r2);
	mult(r1, r2);
	div(r1, r2);
}
