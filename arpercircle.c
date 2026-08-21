#include<stdio.h>
void main() {
    int r;
    printf("Enter the radius: ");
    scanf("%d", &r);
    printf("The area is %d", 3.14 * r * r);
    printf("The perimeter is %d", 2 * 3.14 * r);
}