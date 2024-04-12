#include<stdio.h>
void swap(int *a, int *b);

int main(){
	int x=1, y=2;
	swap(&x, &y);
	printf("%d %d\n", x, y);
	return 0;
}
void swap(int *a, int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
