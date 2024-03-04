#include <stdio.h>

int main(){
    int n,n2;

    printf("Enter row and column: ");
    scanf("%d %d",&n,&n2);
    int matrix[n][n2];
    for(int i = 0; i < n; i++){
        for(int j=0; j<n2; j++){
            printf("matrix [%d][%d]= ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j=0; j<n2; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
    

}
