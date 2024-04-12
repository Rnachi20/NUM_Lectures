#include <stdio.h>

main(){
	char x[100], y[100], z, a[100], b[100], c[100];
	printf("Tanii ovog? ");
	scanf("%s", &x);
	
	printf("Tanii ner? ");
	scanf("%s", &y);
	
	printf("Tursun on, sar, udur? ");
	scanf("%d", &z);
	
	printf("Durtai ungu? ");
	scanf("%s", &a);
	
	printf("Hobby yu ve? ");
	scanf("%s", &b);
	
	printf("Chuluut tsagaaraa yu hiideg ve? ");
	scanf("%s", &c);
	
	printf("\n %s ovogtoi %s ni %s udur tursun. Odoo %d nastai. Tanii durtai ungu %s. Tanii hobby ni %s. Chuluut tsagaaraa hiideg zuil ni %s. ", x, y, z, 2023-z, a, b, c);
}
