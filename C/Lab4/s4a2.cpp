#include <stdio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2, x3, y3;
	float a, b, c;
	scanf ("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	
	a = (float)sqrt(pow(x1,2) + pow(y1, 2));
	b = (float)sqrt(pow(x2,2) + pow(y2, 2));
	c = (float)sqrt(pow(x3,2) + pow(y3, 2));

	if(a<b && b<c){
		printf ("Hamgiin hol tseg ni: (%d, %d)\n", x3, y3);
		printf ("Hamgiin oir tseg ni: (%d, %d)\n", x1, y1);
	}else if(a<c && c<b){
		printf ("Hamgiin hol tseg ni: (%d, %d)\n", x2, y2);
		printf ("Hamgiin oir tseg ni: (%d, %d)\n", x1, y1);
	}else if(b<a && a<c){
		printf ("Hamgiin hol tseg ni: (%d, %d)\n", x3, y3);
		printf ("Hamgiin oir tseg ni: (%d, %d)\n", x2, y2);
	}else if(b<c && c<a){
		printf ("Hamgiin hol tseg ni: (%d, %d)\n", x1, y1);
		printf ("Hamgiin oir tseg ni: (%d, %d)\n", x2, y2);
	}else if(c<a && a<b){
		printf ("Hamgiin hol tseg ni: (%d, %d)\n", x2, y2);
		printf ("Hamgiin oir tseg ni: (%d, %d)\n", x3, y3);
	}else if(c<b && b<a){
		printf ("Hamgiin hol tseg ni: (%d, %d)\n", x1, y1);
		printf ("Hamgiin oir tseg ni: (%d, %d)\n", x3, y3);
	}
}
