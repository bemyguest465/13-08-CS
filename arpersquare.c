#include<stdio.h>
void main() {
    int side;
    printf("Enter the side: ");
    scanf("%d", &side);
    printf("The area is %d", side * side);
    printf("The perimeter is %d", 4 * side);
}