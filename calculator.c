#include<stdio.h>
int main(){
    char operator;
    double firstnumber, secondnumber;
    printf("Enter operator to be operated");
    scanf("%c",&operator);
    printf("Enter two operands");
    scanf("%lf %lf",&firstnumber, &secondnumber);
    switch (operator)
    {
    case'+':
    printf("%lf + %lf = %lf",firstnumber,secondnumber,firstnumber+secondnumber);
       
        break;
        case'-':
        printf("%lf-%lf=%lf",firstnumber,secondnumber,firstnumber-secondnumber);
        break;
        case'*':
        printf("%lf*%lf=%lf",firstnumber,secondnumber,firstnumber*secondnumber);
        break;
        case'/':
        printf("%lf / %lf =%lf",firstnumber,secondnumber,firstnumber/secondnumber);
        break;
    
    default:
    printf("Enter a valid opeartor");
        break;
    }
}