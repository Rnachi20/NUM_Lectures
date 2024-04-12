#include<stdio.h>
int main(){
	int i=0, s=0, d=0, j=0, c;
	char a[100];
	printf("Uguulberee oruulna uu?\n");
	gets(a);
	while(a[i]!='\0'){
		if(a[i]==' '){
		}
		else {
		j++;
		while(a[i]!=' ' && a[i]!='\0'){
			if(a[i]=='a' ||
			a[i]=='e' ||
			a[i]=='u' ||
			a[i]=='o' ||
			a[i]=='i' ||
			a[i]=='A' ||
			a[i]=='E' ||
			a[i]=='U' ||
			a[i]=='O' ||
			a[i]=='I'){
			s++;
			}
			i++;
			}
		if(d<=s){
			d=s;
			c=j;
		}
		}
		s=0;
		i++;	
	}
	j=0;
	i=0;
	while(a[i]!='\0'){
		if(a[i]==' '){
		}
		else {
		j++;
		while(a[i]!=' ' && a[i]!='\0'){
			if(a[i]=='a' ||
			a[i]=='e' ||
			a[i]=='u' ||
			a[i]=='o' ||
			a[i]=='i' ||
			a[i]=='A' ||
			a[i]=='E' ||
			a[i]=='U' ||
			a[i]=='O' ||
			a[i]=='I'){
			s++;
			}
			i++;
			}
		if(d==s){
			printf("%d-r ug hamgiin ih egshigtei. ", j);
		}
		}
		s=0;
		i++;	
	}
}

