#include<stdio.h>
void main() {
    int kg;
    printf("Enter the amount in kilograms: ");
    scanf("%d", &kg);
    printf("The amount in grams is %d", kg * 1000);
}