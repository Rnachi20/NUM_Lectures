#include<stdio.h>
#include<string.h>
int main(){
	char a[100], b[100];
	int i, j=0, alen=0, blen=0;
	gets(a);
	gets(b);
	for(i=0; a[i]!='\0'; i++){
		alen++;
	}
	for(i=0; b[i]!='\0'; i++){
		blen++;
	}
	char c[alen+blen];
	i=0;
	while(a[i]!='\0'){
		c[j]=a[i];
		i++;
		j++;
	}
	i=0;
	while(b[i]!='\0'){
		c[j]=b[i];
		i++;
		j++;
	}
	c[j]='\0';
	puts(c);
}
