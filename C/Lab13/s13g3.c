#include<stdio.h>
typedef struct Rational{
	int d, n; //d/n
}rt;

rt add(const rt *a, const rt *b);
rt sub(const rt *a, const rt *b);
rt mult(const rt *a, const rt *b);
rt div(const rt *a, const rt *b);
void simplify(rt *a);
void read(rt *a);
void print(rt *a);
int main(){
	rt x, y, tmp;
	read(&x);
	read(&y);
	tmp=add(&x, &y);
	simplify(&tmp);
	print(&tmp);
	tmp=sub(&x, &y);
	simplify(&tmp);
	print(&tmp);
	tmp=mult(&x, &y);
	simplify(&tmp);
	print(&tmp);
	tmp=div(&x, &y);
	simplify(&tmp);
	print(&tmp);
}
void read(rt *a){
	scanf("%d%d", &a->d, &a->n);
}
void print(rt *a){
	printf("%d/%d\n", a->d, a->n);
}
rt add(const rt *a, const rt *b){
	rt s;
	s.d=a->d*b->n+a->n*b->d;
	s.n=a->n*b->n;
	return s;
}
rt sub(const rt *a, const rt *b){
	rt s;
	s.d=a->d*b->n-a->n*b->d;
	s.n=a->n*b->n;
	return s;	
}
rt mult(const rt *a, const rt *b){
	rt m;
	m.d=a->d*b->d;
	m.n=a->n*b->n;
	return m;
}
rt div(const rt *a, const rt *b){
	rt d;
	d.d=a->d*b->n;
	d.n=a->n*b->d;
	return d;
}
void simplify(rt *a){
	int gcd, i;
	rt tmp;
	if(a->d<0){
		tmp.d=-a->d;
		tmp.n=a->n;
	}
	else if(a->n<0){
		tmp.d=a->d;
		tmp.n=-a->n;
	}
	else{
		tmp.d=a->d;
		tmp.n=a->n;
	}
	for(i=1; i<=tmp.d && i<=tmp.n; ++i){
		if(tmp.d%i==0 && tmp.n%i==0)
		gcd=i;
	}
	a->d=a->d/gcd;
	a->n=a->n/gcd;
	
}

