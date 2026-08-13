#include<stdio.h>
void main(){
    float p, r, t;
    printf("Enter the principal: ");
    scanf("%f", &p);
    printf("Enter the rate: ");
    scanf("%f", &r);
    printf("Enter the time(in years): ");
    scanf("%f", &t);
    printf("The interest is %.2f",(p*r*t)/100);
}

