#include<stdio.h>
int *search(int a[], int value, int size);
void read(int a[], int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void print(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main(){
	int a[100];
	read(a, 5);
	print(a, 5);
	int *p;
	p=search(a, 3, 5);
	if(p==NULL){
		printf("NOT FOUND");
	}
	else{
		printf("number %d at index %d\n", *p, p-a);
	}
	return 0;
}
int *search(int a[], int value, int size){
	int i;
	for(i=0; i<size; i++){
		if(a[i]==value){
			return &a[i];
		}
	}
	return NULL;
}
