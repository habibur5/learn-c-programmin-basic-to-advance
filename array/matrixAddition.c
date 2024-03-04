#include <stdio.h>

int main(){


    int row, col;


    // 2d arry like matrix 
    int A[3][2], B[3][2], C[3][2];

    // input for a matrix
    for (row = 0 ; row<3;row++){
       for(col=0; col<2; col++){
        printf("Matrix [%d] [%d] ",row,col);
        scanf("%d", &A[row][col]);
       }
       
    }

    // print for A Matrix

    for (row = 0 ; row<3;row++){
       for(col=0; col<2; col++){
        printf("%d ", A[row][col]);
       }
       printf("\n");
    }


     // input for B matrix
    for (row = 0 ; row<3;row++){
       for(col=0; col<2; col++){
        printf("Matrix [%d] [%d] ",row,col);
        scanf("%d", &B[row][col]);
       }
       
    }

    // print for B Matrix

    for (row = 0 ; row<3;row++){
       for(col=0; col<2; col++){
        printf("%d ", B[row][col]);
       }
       printf("\n");
    }


    // C matrix = A+B


    for(row = 0 ; row<3; row++){
        for(col=0; col<2; col++){
            C[row][col] = A[row][col]+B[row][col];

        }
    }
    /// printing C matrix


    printf("C = \n");

    for(row=0; row<3; row++){
        for(col=0; col<2; col++){
            printf("%d ", C[row][col]);

        }
        printf("\n");

    }


}