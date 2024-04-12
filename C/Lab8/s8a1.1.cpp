#include<stdio.h>
#include<string.h>
int main(){
	char firstname[100], lastname[100], favcolor[100], hobby[100],freetime[100];
	int y, m , d, age;
	printf("tanii ovog:\n");
	gets(lastname);
	printf("tanii ner:\n");
	gets(firstname);
	printf("tanii durtai ungu:\n");
	gets(favcolor);
	printf("tanii hobby:\n");
	gets(hobby);
	printf("ta chuluut tsagaaraa yu hiideg ve:\n");
	gets(freetime);
	printf("tursun on sar udur uu oruulna uu:?\n");
	scanf("%d%d%d", &y, &m, &d);
	age=2022-y;
	
	printf("%s ovogtoi %s ni %d onii %d sariin %d udur tursun. Odoo %d nastai. Tuunii durtai ungu bol %s. Ter chuluut tsagaaraa %s. Tuunii hobby bol %s.", lastname, firstname, y, m, d, age, favcolor, freetime, hobby);
	
}
