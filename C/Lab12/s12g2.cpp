#include <stdio.h>
#include <math.h>

typedef struct {
	int x,y;
} Point;

typedef struct {
	Point A, B, C;
} Triangle_P;

float distance (Point a, Point b){
	float d = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
	return d;
}

float find_area(Triangle_P triangle){
	float p1 = distance(triangle.A, triangle.B);
	float p2 = distance(triangle.B, triangle.C);
	float p3 = distance(triangle.C, triangle.A);
	float p = (p1 + p2 + p3) / 2.0;
	float s = sqrt(p * (p - p1) * (p - p2) * (p - p3));
	return s;
}

main(){
	Triangle_P triangle;
	printf("A tseg: \n");
		scanf("%d %d", &triangle.A.x, &triangle.A.y);
	printf("B tseg: \n");
		scanf("%d %d", &triangle.B.x, &triangle.B.y);
	printf("C tseg: \n");
		scanf("%d %d", &triangle.C.x, &triangle.C.y);
	
	printf("%.2f", find_area(triangle));
}


