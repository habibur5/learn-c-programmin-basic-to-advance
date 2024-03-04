#include <stdio.h>

int main(){
    int numbers[]= {12,14,15};
    int lengthofArray = sizeof(numbers)/ sizeof(numbers[0]);

    if(lengthofArray < 2){
        printf("Array should have at least 2 elements.\n");
    }
    int first, second;

    if(numbers[1]> numbers[0]){
    first = numbers[1];
    second = numbers[0];

    }else{
        first =  numbers[0];
        second= numbers[1];      
    }


    for(int index =2; index < lengthofArray; index++){
        if(numbers[index]>first){
            second = first;
            first = numbers[index];
        }
        else if(numbers[index]>second && numbers[index]!= first){
            second = numbers[index];

        }

    }

    printf("%d is first and %d is second",first, second);
        
    



}