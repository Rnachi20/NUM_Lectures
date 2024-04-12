#include<stdio.h>
main(){
	int ehlel, udur, tooluur,ehnii_mur=1;
	printf("Sariin ehleliin udriig oruulna uu (1=Monday, ..., 6=Saturday, 7=Sunday): ");
	scanf("%d",&ehlel);
	printf("\n\n");
	printf("March 2023\n");
	printf(" Mon | Tue | Wed | Thu | Fri | Sat | Sun\n");
	
	for(udur=1; udur<=31; udur++){
		if(ehnii_mur){
			if(ehlel>udur){
				printf("      ");				
			}else{
				printf("   1  ");
				udur=1;
				ehnii_mur=0;
				tooluur=ehlel;
			}
		}else{			
			if(tooluur==7){
				tooluur=1;
				printf("\n");
			}else{
				tooluur++;
			}
			if(udur<10&&udur!=8){
				printf(" ");				
			}
			printf("  %d  ", udur);
			if(udur==8){
				printf("*");
			}
		}
	}
	return 0;
}
