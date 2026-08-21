#include<stdio.h>
#include<math.h>
void main() {
    int byte;
    printf("Enter the amount in bytes: ");
    scanf("%d", &byte);
    printf("The amount in kb is %.2f", (float)(byte/pow(2,10)));
    printf("The amount in mb is %.2f", (float)(byte/pow(2,20)));
    printf("The amount in gb is %.2f", (float)(byte/pow(2,30)));
}