#include <stdio.h>

int main(){

    int i;

    print:
        printf("level %d\n",i);
        i=i+1;
        if(i<5){
            goto print;
        }



}