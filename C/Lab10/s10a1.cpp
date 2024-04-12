#include<stdio.h>
#include<string.h>

int count(char s[]){
	char vwl[]="AEIOUYaeiouy";
	int a=0;
	for(int i=0; s[i]!='\0'; i++){
		for(int j=0; vwl[j]!='\0'; j++){
			if(s[i]==vwl[j]) 
			a++;
		}
	}
	return a;
}

int main(){	
	char s[100];
	gets(s);	
	printf("egshgiin too = %d", count(s));
}

