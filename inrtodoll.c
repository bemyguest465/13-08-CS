#include<stdio.h>
void main() {
    int inr;
    printf("Enter the amount in INR: ");
    scanf("%d", &inr);
    printf("The amount in dollars is %.2f", (float)(inr / 48));
}