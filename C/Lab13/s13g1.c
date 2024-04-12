#include<stdio.h>
void find(int a[], int n, int *min, int *max);
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
	int min, max, n;
	printf("size of array:\n");
	scanf("%d", &n);
	int a[n];
	read(a, n);
	print(a, n);
	find(a, n, &min, &max);
	printf("min=%d max=%d", min, max);
	return 0;
}
void find(int a[], int n, int *min, int *max){
	*min=1000;
	*max=-1000;
	int i;
	for(i=0; i<n; i++){
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}
	}
}
