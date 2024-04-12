#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void read_2darray(int a[][100], int n, int m){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]) ;
}

void print_2darray(int a[][100], int n, int m){
	int i,j;
	for(i= 0;i<n;i++) {
		for(j= 0;j<m;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
}

void min(int a[][100], int n, int m, int row[] , int col[]){
	int i, j;
	for(i=0; i<n; i++){
		
	}
} 

int main(){
	int c_row, c_col;
	int A[100],B[100];
	int C[100][100];
	printf("xusnegtiin mor, baganii toog oruul: ");
	
	scanf("%d%d", &c_row, &c_col);
	read_2darray(C,c_row,c_col);
	print_2darray(C,c_row,c_col);
	min(C,c_row,c_col,A,B);
	printf("mor buriin xamgiin baga: ");
	
	for(i= 0;i<c_row;i++) {
		printf("%d r moriin xamgiin baga: %d\n",i,A[i]) ;
	}
	printf("bagana buriin xamgiin baga:");
	
	for(i= 0;i<c_col;i++) {
		printf("%d r moriin xamgiin baga: %d\n",i,B[i]) ;
	}
	return 0;
}
