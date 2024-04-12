#include <stdio.h>
#include <math.h>

struct Point {
	int x, y;
}p1,p2;

double distance(struct Point a, struct Point b) {
	
	double dx = (double) (b.x - a.x);
	double dy = (double) (b.y - a.y);
	return sqrt(dx * dx + dy * dy);
	
}

main() {
	double zai;
	
	p1 = {0, 0};
	p2 = {1, 1};
	
	zai = distance(p1, p2);
	
	printf("2 tsegiin hoorondoh zai ni: %.2lf\n",zai);

}
