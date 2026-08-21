#include<stdio.h>
void main() {
    int fahr;
    printf("Enter the temp in Fahrenheit: ");
    scanf("%d", &fahr);
    printf("The temp in Celsius is %.2f", (float)((fahr - 32) * 5/9));
}