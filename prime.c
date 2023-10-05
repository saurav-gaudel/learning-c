#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Composite number ");
            goto skip;
        }
    }
    printf("Prime number");
    skip:
    return 0;

}