#include<stdio.h>
void main(){
    float cel;
    printf("Enter the temp. in celsius: ");
    scanf("%f", &cel);
    printf("The temp. in farenheit is %.2f",(cel*(9/5.0))+32);
}


