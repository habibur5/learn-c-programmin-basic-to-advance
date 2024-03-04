#include <stdio.h>

int main(){

    int n,a=0,b=1,sum,count;

    printf("Enter range: ");
    scanf("%d",&n);
    while (count<n)
    {
        if (count<=1)
        {
            sum = count;

        }else{

            sum = a+b;
            a=b;
            b=sum;
        }
        printf("%d ",sum);
        count++;
        
    }
    
    getchar();
}