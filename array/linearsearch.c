#include <stdio.h>

int main(){

    int numbers[]={20, 30, 40, 50};
     
    int searchNumber = 30;
    int found = -1;

    for( int index = 0; index <6; index++){
        if(numbers[index]== searchNumber){
            found = index;
            break;
        }

    }
    if (found==-1){
        printf("Not Found");
    }else
    {
        printf("%d is found in index %d",searchNumber,found);
    }
    

}