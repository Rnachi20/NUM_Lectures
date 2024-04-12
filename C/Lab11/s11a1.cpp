#include <stdio.h>
#include <math.h>
struct Triangle{
	int a,b,c;
};

int main(){
	struct Triangle tr1, tr2;
	
	int p1, p2, s1, s2;
	
	p1 = (tr1.a + tr1.b + tr1.c)/2;
	s1 = sqrt((p1*(p1 - tr1.a)*(p1 - tr1.b)*(p1 - tr1.c)));
	
	p2 = (tr2.a + tr2.b + tr2.c)/2;
	s2 = sqrt((p2*(p2 - tr2.a)*(p2 - tr2.b)*(p2 - tr2.c)));
}
