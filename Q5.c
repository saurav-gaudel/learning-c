// To determine weather the number is 2 digits or not 
# include <stdio.h> 
int main() {
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    printf("%d",a>9 && a<100);
}