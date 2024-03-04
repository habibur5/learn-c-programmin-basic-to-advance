#include <stdio.h>

int main(){

    int num1, num2, rem,gcd,n1,n2,lcm;
    printf("Enter a number(big Number): ");
    scanf("%d",&num1);
    printf("\nEnter Second number: ");
    scanf("%d",&num2);

    n1= num1;
    n2=num2;

    if (n1%n2==0)
    {
       while (num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    }else{

        num1 = n1*n2;
    }
    gcd =num1;
    printf("\nGcd is : %d\n",gcd);
    lcm = (n1*n2)/gcd;
    printf("LCM is: %d",lcm);




}