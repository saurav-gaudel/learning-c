// WAP to print sum of first n natural numbers and also print them in reverse
# include <stdio.h>
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int sum = 0;
     for(int i=1; i<=n; i=i+1)
     {
        sum = sum+i;
     }    
     printf("sum of first %d natural number is : %d \n ",n, sum);
     for(int i=n; i>=1; i=i-1)
     {
        printf("%d \t",i);
     }
}