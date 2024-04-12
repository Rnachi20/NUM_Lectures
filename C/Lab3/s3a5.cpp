#include <stdio.h>

int main()
{
	int a, b, c , d;
	scanf("%d%d%d", &a, &b, &c);
	d = (a<b && b<c)*a + (a<c && c<b)*a + (b<c &&c<a)*b + (b<a &&a<c)*b +(c<a &&a<b)*c + (c<b &&b<a)*c ;
	printf("Hamgiin baga too: %d\n", d);
	
	d = (a<b && b<c)*c + (a<c && c<b)*b + (b<c &&c<a)*a + (b<a &&a<c)*c +(c<a &&a<b)*b + (c<b &&b<a)*a ;
	printf("Hamgiin ih too: %d\n", d);
	
	d = (a<b && b<c)*b + (a<c && c<b)*c + (b<c &&c<a)*c + (b<a &&a<c)*a +(c<a &&a<b)*a + (c<b &&b<a)*b ;
	printf("Goliin too: %d\n", d);
	/**/
}
