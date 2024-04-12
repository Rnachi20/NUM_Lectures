#include<stdio.h>
struct Triangle{
	int a, b, c;
};
void read(struct Triangle *p){
	scanf("%d%d%d", &p->a, &p->b, &p->c);
}

int main(){
	struct Triangle g;
	read(&g);
	printf("taluud= %d %d %d", g.a, g.b, g.c);
	return 0;
}
