#include<stdio.h>
void main(){
    float l,b;
    printf("Enter the length: ");
    scanf("%f", &l);
    printf("Enter the breadth: ");
    scanf("%f", &b);
    printf("The area is %.2f",l*b);
    printf("The perimeter is %.2f", 2*(l+b));
}


