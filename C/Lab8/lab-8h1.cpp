#include<stdio.h>
int main(){
	int i=0, d=0;
	char a[100];
	printf("Uguulberee oruulna uu\n");
	gets(a);
	while(a[i]!='\0'){
		if(a[i]==' '){
		}
		else {
			d++;
			while(a[i]!=' ' && a[i]!='\0'){
				i++;
			}
		}
		i++;
	}
	printf("Uguulber %d ugtei.", d);
}
