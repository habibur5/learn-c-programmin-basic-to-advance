#include <stdio.h>
int main(){
    int n1, n2;

    printf("Enter row and column: ");
    scanf("%d %d",&n1,&n2);
    int matrix[n1][n2];

    for(int i = 0; i< n1; i++){
        for(int j = 0; j <n2; j++){
            printf("martrix[%d][%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i< n1; i++){
        for(int j = 0; j <n2; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix= \n");
    for(int l=0; l<n1; l++){
        for(int s = 0; s<n2; s++){
            printf("%d ", matrix[s][l]);
        }
        printf("\n");
    }
    return 0;

}