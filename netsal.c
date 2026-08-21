#include<stdio.h>
void main() {
    int gross;
    printf("Enter the gross salary: ");
    scanf("%d", &gross);
    printf("The net salary is %d", gross + (gross * 0.1) - (gross * 0.03));
}