#include<stdio.h>
void main(){
    float d;
    printf("Enter the amt in dollars: ");
    scanf("%f", &d);
    printf("The amt in pounds is %.2f",(d/48)*70);
}

