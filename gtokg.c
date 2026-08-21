#include<stdio.h>
void main() {
    int g;
    printf("Enter the amount in grams: ");
    scanf("%d", &g);
    printf("The amount in kilograms is %.2f", (float)(g/1000));
}