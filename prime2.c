#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("enter a number to be checked \t",n);
    scanf("%d",&n);
    if (n==0||n==1)
    {
    printf("Entered number is neither prime nor composite");

    }
    else if (n==2)
    {
        printf("Entered number is prime");

    }
    else
    {
        for ( i = 2; i < n; i++)
        {
            if ( n % i == 0 )
            {
                flag=0;
                break;
            }
            else
            flag=1;
            continue;
            
        }
        
        
    }
    if (flag==0)
    printf("ENtered number is composite ");
    if(flag==1)
    printf("Entered number is prime");


    
    
}