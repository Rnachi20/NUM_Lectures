#include <stdio.h>
#include <math.h>

typedef struct {
	int dim;
	float dat[100];
} Vector;

Vector a;
Vector b;

int dot_product (Vector a, Vector b){
	int sum = 0;
	for(int i = 0; i < a.dim; i++){
		sum += a.dat[i]*b.dat[i];
	}
	return sum;
}

Vector scalar_mult(Vector a, float t){
	for(int i = 0; i < a.dim; i++){
		a.dat[i] *= t;
	}
	return a;
}

Vector scalar_mult(Vector a, int t){
	for(int i = 0; i < a.dim; i++){
		a.dat[i] *= t;
	}
	return a;
}

float len(Vector a){
	int sum = 0;
	for(int i = 0; i < a.dim; i++){
		sum += a.dat[i]*a.dat[i];
	}
	return sqrt(sum);
}

main(){
	float t;
	printf("2 vectoriin hemjeesiig oruul: ");
	scanf("%d", &a.dim);
	b.dim = a.dim;
	for (int i = 0; i < a.dim; i++){
		printf("A vectoriin %d-r elementiig oruul: ", i+1);
		scanf("%f", &a.dat[i]);
	}
	
	for (int i = 0; i < b.dim; i++){
		printf("B vectoriin %d-r elementiig oruul: ", i+1);
		scanf("%f", &b.dat[i]);
	}
	
	printf("\n2 vectoriin scalar urjver: %d", dot_product (a, b));
	
	printf("\n\nButarhai t too oruul: ");
	scanf("%f", &t);
	Vector a1 = scalar_mult(a, t);
	printf("\nButarhai urjver: ");
	
	for(int i = 0; i < a1.dim; i++) {
		if(i == a1.dim - 1){
			printf("%.2f", a1.dat[i]);
		}
		else {
			printf("%.2f ",a1.dat[i]);
		}
		
	}
	
	int t1;
	printf("\n\nBuhel t too oruul: ");
	scanf("%d", &t1);
	Vector a2 = scalar_mult(a, t1);
	printf("\nBuhel urjver: ");
	for(int i = 0; i < a2.dim; i++){
		if(i == a2.dim - 1) {
			printf("%d", int(a2.dat[i]));
		}
		else {
			printf("%d ", int(a2.dat[i]));
		}
		
	}
	printf("\nA vectoriin urt: %.2f", len(a));
	printf("\nB vectoriin urt: %.2f", len(b));
}
