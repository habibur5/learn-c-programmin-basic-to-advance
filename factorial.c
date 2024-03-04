#include <stdio.h>

int main(){

    int num, count;

    printf("Enter any number: ");
    scanf("%d",&num);
    if (num <=1)
    {
        count=1;
    }
    for(int i = 2; i <num/2; i++){
        if (num%i==0)
        {
            count=1;
            break;
        }
    }

    if (count==1){
        printf("%d is not a prime number", num);
    }else{
        printf("%d is a prime number", num);
        }




}