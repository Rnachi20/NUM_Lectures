	#include<stdio.h>
	#include<string.h>
	int main(){
		int i=0, s=0, k=0, j=0, u=0, l=0;
		char a[100];
		printf("Temdegt tsuvaag ugnu uu?\n");
		gets(a);
		char b[100];
		printf("haih ugee oruulna uu?\n");
		gets(b);
		while(a[i]!='\0'){
		
		if(a[i]==' '){
			}
			else {
				j=i;
				l=i;
				while(a[l]!=' ' && a[l]!='\0'){
					l++;
					k++;
				}
				if(strlen(b)==k){
					while(strlen(b)>u){
						if(a[j]==b[u]){
							j++;
							u++;
						}
						else {
							s++;
						}
					}
					if(s==0){
					}else{
						printf("-1");
					}
					i=i+strlen(b);
					s=0;
					u=0;
				}
				i=l;
				k=0;
			}
			if(a[i]=='\0'){
				return 0;
			}
		i++;	
		}
	}


