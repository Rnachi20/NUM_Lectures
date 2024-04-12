#include <stdio.h>
int main(){
	int n,a[100][100],i,j,mur,bagana,diagonal1,diagonal2;
	printf("n=");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<=n;i++){ 
		printf("%d-r murnii niilber: ",i);
		mur=0;
		for(j=1;j<=n;j++){
			mur=mur+a[i][j];
		}
		printf("%d\n",mur);
	}
	
	for(j=1;j<=n;j++){ 
		printf("%d-r baganii niilber: ",j);
		bagana=0;
		for(i=1;i<=n;i++){
			bagana=bagana+a[i][j];
		}
		printf("%d\n",bagana);
	}
	printf("1-r diagonaliin niilber: ");
	i=1, diagonal1=0;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
		if(i==j){
			diagonal1=diagonal1+a[i][j];
		}
	}
	}
	printf("%d\n",diagonal1);
	
	printf("2-r diagonaliin niilber: ");
	diagonal2=0;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
		if(i+j==n+1){
			diagonal2=diagonal2+a[i][j];
		}
	}
}
	printf("%d\n",diagonal2);
}
