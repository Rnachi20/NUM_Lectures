#include<stdio.h>
#include<string.h> 
#include<ctype.h>

int is_valid(char pwd[]){
	int i, j, c=0, l,m, o=0, x, z=0;
	int n = strlen(pwd);
	i = pwd[0];
	if(n<6){
		return 1;
	}
	for(i = 0; i < n; i++) {
		j = pwd[i];
		if(j>=65 && j<=90){
			c++;
		}
	}
	if(c == 0)
		return 2;
		
	for(x = 0; x < n; x++) {
		if(isdigit(pwd[x]))
			z++;
	}
	if(z < 3)
		return 3;
		
	
	for(l = 0; l < n; l++){
		m = pwd[l];
		if(m>=32 && m>=47){
			o++;
		}
	}	
	if(o == 0)
		return 4;
		
	if(n>=6 && c>0 && z>=3 && o>0)	
		return 0;
}

int main(){
	char pwd[100];
	printf("Nuuts ugee oruulna uu: ");
	gets(pwd);
	if(is_valid(pwd)==0){
		printf("Ynziin goy nuuts ug bn");
	}else if(is_valid(pwd)==1){
		printf("Het bogino bn");
	}else if(is_valid(pwd)==2){
		printf("Ydaj neg tom useg bichne uu");
	}else if(is_valid(pwd)==3){
		printf("Bagadaa 3 too oruulna uu");
	}else if(is_valid(pwd)==4){
		printf("Ydaj neg temdegt bichne uu");
	}
}

