#include <stdio.h>

int main() {
   int arr[4][4];
   int i, j, num, row, col;

   printf("Enter 15 numbers to fill the 4x4 array:\n");
   for (i = 0; i < 15; i++) {
      scanf("%d", &num);
      row = i / 4;
      col = i % 4;
      arr[row][col] = num;
   }

   printf("The array you entered is:\n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }

   printf("The listing path of the numbers is:\n");
   for (i = 0; i < 4; i++) {
      if (i % 2 == 0) {
         for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
         }
      } else {
         for (j = 3; j >= 0; j--) {
            printf("%d ", arr[i][j]);
         }
      }
   }
   printf("\n");

   return 0;
}

