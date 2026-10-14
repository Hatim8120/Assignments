#include <stdio.h>

int main() {



    int a[2][2];


    int b[2][2];


    int sum[2][2];
    int i, j;

  
    printf("Enter 4 numbers for first matrix: ");
    for(i = 0; i < 2; i++) {


        for(j = 0; j < 2; j++) {
    scanf("%d", &a[i][j]);
        }
    }
    printf("Enter 4 numbers for second matrix: ");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
      }
    printf("The sum matrix is: ");

    
    for(i = 0; i < 2; i++) {



        for(j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];



            printf("%d ", sum[i][j]); 
        }
    }

    return 0;
}
