#include <stdio.h>
#include <math.h>

struct Triangle {
	int a, b, c;
};

float Area(struct Triangle t) {
	float p = (t.a + t.b + t.c) / 2.0;
	float area = sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
	return area;
}
main() {
	struct Triangle t1 = {10, 5, 12};
	struct Triangle t2 = {9, 13, 6};
	
	float area1 = Area(t1);
	float area2 = Area(t2);
	
	printf("Ehnii gurvaljnii talbai: %.2f\n",area1);
	printf("Hoyrdahi gurvaljnii talbai: %.2f\n",area2);
	
	if (area1 > area2) {
        printf("Ehnii gurvaljin tom baina.\n");
    } 
	else if (area1 < area2) {
        printf("Hoyrdahi gurvaljin tom baina.\n");
    } 
	else {
        printf("Hoyr gurvaljin tentsuu baina.\n");
    }
}
