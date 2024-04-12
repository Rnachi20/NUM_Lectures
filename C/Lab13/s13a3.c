#include<stdio.h>

void find(int a[], int n, int *addr, int *addr1){
	int i, evenCount=0, oddCount=0;
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			evenCount++;
		}
		else{
			oddCount++;
		}
	}
	*addr=evenCount;
	*addr1=oddCount;
}
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
	int x, y;
	find(a, 5, &x, &y);
	printf("even number count=%d\n", x);
	printf("odd number count=%d\n", y);
	return 0;
}
