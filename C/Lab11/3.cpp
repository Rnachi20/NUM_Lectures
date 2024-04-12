#include <stdio.h>
#include <math.h>

struct Triangle {
	int a, b, c;
}t1,t2;

float find_area(struct Triangle t) {
	float p = (t.a + t.b + t.c) / 2.0;
	float area = sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
	return area;
}
main() {
//	struct Triangle t1 = {10, 5, 12};
//	struct Triangle t2 = {9, 13, 6};
	
	printf("Ehnii gurvaljnii medeelel: \n");
	scanf("%d%d%d",&t1.a,&t1.b,&t1.c);
	printf("Hoyrdahi gurvaljnii medeelel: \n");
	scanf("%d%d%d",&t2.a,&t2.b,&t2.c);
	
	float area1 = find_area(t1);
	float area2 = find_area(t2);
	
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
