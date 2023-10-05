 // TO convert celisus scale to fahenheite scale of temperature
 # include<stdio.h>
int main() {
    int celsiustemp;
    printf("enter given temperature in celsius ");
    scanf("%d",&celsiustemp);
    printf("Temperature in fahenheite is : %f",(9*celsiustemp/5)+32 );
    return 0;


}