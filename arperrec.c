#include<stdio.h>
void main() {
    int l, b;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    printf("The area is %d", l * b);
    printf("The perimeter is %d", 2 * (l + b));
}