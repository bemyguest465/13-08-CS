#include<stdio.h>
void main(){
    float rad;
    printf("Enter the radius: ");
    scanf("%f", rad);
    printf("The circumference is %.2f", 2*(22/7)*rad);
    printf("The area is %.2f", (22/7)*rad*rad);
}
