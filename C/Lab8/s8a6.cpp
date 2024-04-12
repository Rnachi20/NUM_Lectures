#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	
	int i;
	for(i=0; a[i]!='\0'; i++){
		if(a[i]==' '){
			printf("\n");
		}
		else {
			printf("%c", a[i]);
		}
	}
}
