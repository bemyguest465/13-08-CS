#include<stdio.h>
void main() {
    int doll;
    printf("Enter the amount in dollars: ");
    scanf("%d", &doll);
    printf("The amount in pounds is %.2f", (float)(doll * (70.0/48.0)));
}