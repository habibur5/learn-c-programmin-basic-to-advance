#include <stdio.h>

int main(){

    int number, result, times;
    
    printf("Enter any number: ");
    scanf("%d",&number);

        for(int x=1; x<= 10; x++){

            result = number*x;
            printf("%d X %d = %d\n", number, x,result );
        }

}