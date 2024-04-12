#include <stdio.h>

int main(){
	int on=2023, sar=3, odor=6, o , s , d;
	printf("ta on, sar, udruu oruulna uu\n");
	scanf("%d%d%d", &o,&s,&d);
	if(o>on){
		printf("ireedui");
	}
	
	else if(o==on){
		if (s==sar){
			
			if(o>odor){
			printf("ireedui");
			}
			else if(o==odor){
				printf("odoo");
			}else 
			printf("ungursun");
			
		}else if (s>sar){
			printf("ireedui");
		}
		
		else 
		printf("ungursun");
	}
	
	else 
	printf("ungursun");

}
