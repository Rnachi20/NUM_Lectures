#include<stdio.h>
#include<string.h>
int main(){
	char a[100], b[100];
	int i=0, count=0, alen, blen;
	gets(a);
	gets(b);
	for(i=0; a[i]!='\0'; i++){
		alen=i;
	}
	
	for(i=0; b[i]!='\0'; i++){
		blen=i;
	}
	
	
	for(i=0; i<=alen &&i<=blen; i++){
		if(a[i]!=b[i]){
		count=1;
		}
	}
	
	
	if(count==0 && alen==blen){
		printf("mun");
	}
	else{
		printf("bish");
	}
}
