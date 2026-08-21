#include<stdio.h>
void main() {
    int p,n,r;
    printf("Enter the principal: ");
    scanf("%d", &p);
    printf("Enter the time: ");
    scanf("%d", &n);
    printf("Enter the rate: ");
    scanf("%d", &r);
    printf("The simple interest is %.2f", (float)(p * n * r) / 100);
}