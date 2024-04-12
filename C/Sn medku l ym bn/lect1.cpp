#include <stdio.h>

int main() {
	
   int m, n; 
   	 printf("Mur, baganiin toog oruulna uu.\n");
     scanf("%d%d", &m, &n);
   int matrix[m][n];  
 
   
   int value = 1;    
   int row_start = 0, row_end = m-1;  
   int col_start = 0, col_end = n-1;  
   
   while (row_start <= row_end && col_start <= col_end) {
      
      for (int i = col_start; i <= col_end; i++) {
         matrix[row_start][i] = value++;
      }
      row_start++;
      
      
      for (int i = row_start; i <= row_end; i++) {
         matrix[i][col_end] = value++;
      }
      col_end--;
      
      
      if (row_start <= row_end) {
         for (int i = col_end; i >= col_start; i--) {
            matrix[row_end][i] = value++;
         }
         row_end--;
      }
      
      
      if (col_start <= col_end) {
         for (int i = row_end; i >= row_start; i--) {
            matrix[i][col_start] = value++;
         }
         col_start++;
      }
   }
   
   
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%3d ", matrix[i][j]);
      }
      printf("\n");
   }
}
