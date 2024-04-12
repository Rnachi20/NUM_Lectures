#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n%400 == 0 || (n % 4 == 0 && n % 100 != 0)){
		printf("undur jil bn aa");
	}else{
		printf("undur bish jil bn aa");
	}
}
