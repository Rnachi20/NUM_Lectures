#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char vwl[]="AEIOUYaeiouy";
	int i, j, count=0;
	gets(a);
	for(i=0; a[i]!='\0'; i++){
		for(j=0; vwl[j]!='\0'; j++){
			if(a[i]==vwl[j]) count++;
		}
	}
	printf("egshgiin too=%d", count);
}
