#include <stdio.h>

int main()
{
	int x, a, b, c, d;
	scanf("%d", &x);
	if(x<10000 && x>999){
		a = x/1000;
		b = (x-a*1000)/100;
		c = (x-a*1000-b*100)/10;
		d = x%10;
		if(a==d && b==c){
			printf("Aztai too");
		}else{
			printf("Azgui l bn daa");
		}
		
	}else{
		printf("Tanii oruulsan ugugdul buruu bna");
	}
}
