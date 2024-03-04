#include <stdio.h>
#include <math.h> // for abs()

int main(){

    // sum of digits 

    int num,rem,num2, temp,temp2,sum=0,plam=0, arm=0, rem2;
    printf("Enter your Number: ");
    scanf("%d",&num);
     // must be include #include <math.h> 

    temp = abs(num);

    while (temp != 0)
    {
        rem = temp%10;
        num2 = rem;
        temp= num/10;

        while (num2 >0)
        {
            //rem2 = num2%10;
            // sum= sum; // for sum of digits
            plam= plam*10 + num2; // for reverse and palindrome number
            arm = arm = (num2*num2*num2);
        }
        printf("sum of digits = %d\n",sum);

        if (num2 == plam)
        {
            printf("%d is plandrome\n",num);
        }else{
            printf("%d is not plandrome\n",num); 
        }
        if (arm == num2)
        
        {
        printf("%d is armstrong\n",arm);
        }else
        {
            printf("%d is not armstrong\n",arm);
        }
        printf("\n");
        
    }
     
    
    

}